#ifndef SEARCHPATH_SEARCH_PATH_H
#define SEARCHPATH_SEARCH_PATH_H

#include <vector>
#include <string>

namespace searchpaths {

///
/// SearchPath class.
///
class SearchPath {
public:
  virtual ~SearchPath() {}
  virtual std::vector<std::string> paths() const = 0;
};

}

#endif
