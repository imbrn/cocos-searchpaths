#include "search_path_decorator.h"

namespace searchpaths {

SearchPathDecorator::SearchPathDecorator(SearchPath *wrappee): wrappee_(wrappee) {}

SearchPathDecorator::~SearchPathDecorator() {
  delete wrappee_;
}

std::vector<std::string> SearchPathDecorator::paths() const {
  std::vector<std::string> wrappee_paths = wrappee_->paths();
  return DecoratePaths(wrappee_paths);
}

}
