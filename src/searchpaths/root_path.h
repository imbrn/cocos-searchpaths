#ifndef SEARCHPATH_ROOT_PATH_H
#define SEARCHPATH_ROOT_PATH_H

#include "search_path_decorator.h"

namespace searchpaths {

///
/// RootPath class.
///
class RootPath: public SearchPathDecorator {
public:
  RootPath(SearchPath *wrappee);
  virtual ~RootPath() {}
  std::vector<std::string> DecoratePaths(const std::vector<std::string> &paths) const override;
};

}

#endif
