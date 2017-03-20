#ifndef SEARCHPATHS_VARIANTS_PATH_H
#define SEARCHPATHS_VARIANTS_PATH_H

#include "search_path_decorator.h"
#include <vector>
#include <string>

namespace searchpaths {

///
/// VariantsPath class.
///
class VariantsPath: public SearchPathDecorator {
  std::vector<std::string> variants_;
public:
  VariantsPath(const std::vector<std::string> variants, SearchPath *wrappee);
  virtual ~VariantsPath() {}
protected:
  virtual std::vector<std::string> DecoratePaths(const std::vector<std::string> &paths) const override;
};

}

#endif
