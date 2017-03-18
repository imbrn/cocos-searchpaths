#ifndef SEARCHPATHS_VARIANT_PATH_H
#define SEARCHPATHS_VARIANT_PATH_H

#include "search_path_decorator.h"
#include <string>

namespace searchpaths {

///
/// VariantPath class.
///
class VariantPath: public SearchPathDecorator {
  std::string variant_;
public:
  VariantPath(const std::string &variant, SearchPath *wrappee);
  virtual ~VariantPath() {}
  std::vector<std::string> DecoratePaths(const std::vector<std::string> &paths) const override;
};

}

#endif
