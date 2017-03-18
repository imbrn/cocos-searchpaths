#ifndef SEARCHPATH_SEARCH_PATH_DECORATOR_H
#define SEARCHPATH_SEARCH_PATH_DECORATOR_H

#include "search_path.h"

namespace searchpaths {

///
/// SearchPathDecorator class.
///
class SearchPathDecorator: public SearchPath {
  SearchPath *wrappee_ = nullptr;

public:
  SearchPathDecorator(SearchPath *wrappee);
  virtual ~SearchPathDecorator();
  virtual std::vector<std::string> paths() const;

protected:
  virtual std::vector<std::string> DecoratePaths(const std::vector<std::string> &paths) const = 0;
};

}

#endif
