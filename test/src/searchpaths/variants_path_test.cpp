#include <catch.hpp>
#include <searchpaths/base_path.h>
#include <searchpaths/variants_path.h>
#include <searchpaths/variant_path.h>

using namespace searchpaths;

TEST_CASE("VariantsPath.path") {
  VariantsPath path({"pt/", ""},
    new VariantPath("small/",
      new BasePath()));
  REQUIRE(path.paths() == std::vector<std::string>({
    "pt/small/",
    "pt/",
    "small/",
    ""
  }));
}
