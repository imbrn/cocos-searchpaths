#include "root_path.h"

namespace searchpaths {

RootPath::RootPath(SearchPath *wrappee): SearchPathDecorator(wrappee) {}

std::vector<std::string> RootPath::DecoratePaths(const std::vector<std::string> &paths) const {
  auto decorated = paths;
  decorated.push_back("");
  return decorated;
}

}
