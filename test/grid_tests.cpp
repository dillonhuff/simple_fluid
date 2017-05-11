#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "scalar_field.h"

namespace sfluid {

  TEST_CASE("Set grid cell") {
    scalar_field field(200, 200);

    field.set(0, 0, 12.3);

    REQUIRE(field.get(0, 0) == 12.3);
    REQUIRE(field.get(0, 1) == 0.0);
  }
  
}
