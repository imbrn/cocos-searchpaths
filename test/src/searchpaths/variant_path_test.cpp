#include <catch.hpp>
#include <searchpaths/variant_path.h>
#include <searchpaths/base_path.h>
#include <searchpaths/root_path.h>

using namespace searchpaths;

TEST_CASE("VariantPath.paths") {
  
  auto path = new RootPath(new VariantPath("mobile", new VariantPath("android", new VariantPath("pt-br",
    new VariantPath("res/small", new BasePath())))));

  REQUIRE(path->paths() == std::vector<std::string>({
    "mobile/android/pt-br/res/small",
    "mobile/android/pt-br",
    "mobile/android",
    "mobile",
    ""
  }));

  delete path;
}
