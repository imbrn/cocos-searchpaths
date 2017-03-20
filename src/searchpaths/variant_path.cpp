#include "variant_path.h"

namespace searchpaths {

VariantPath::VariantPath(const std::string &variant, SearchPath *wrappee):
    variant_(variant), SearchPathDecorator(wrappee) {}

std::vector<std::string> VariantPath::DecoratePaths(const std::vector<std::string> &paths) const {
  std::vector<std::string> result;
  for (auto path : paths)
    result.push_back(variant_ + path);
  result.push_back(variant_);
  return result;
}

}
