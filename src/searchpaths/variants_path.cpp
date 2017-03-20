#include "variants_path.h"

namespace searchpaths {

VariantsPath::VariantsPath(const std::vector<std::string> variants, SearchPath *wrappee):
    SearchPathDecorator(wrappee), variants_(variants) {}

std::vector<std::string> VariantsPath::DecoratePaths(const std::vector<std::string> &paths) const {
  std::vector<std::string> result;
  for (auto variant : variants_) {
    for (auto path : paths)
      result.push_back(variant + path);
    result.push_back(variant);
  }
  return result;
}

}
