#include <catch.hpp>
#include <searchpaths/root_path.h>
#include <searchpaths/base_path.h>

using namespace searchpaths;


TEST_CASE("RootPath.paths") {
  RootPath path(new BasePath());
  REQUIRE(path.paths() == std::vector<std::string>{""});
}
