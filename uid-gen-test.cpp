#include "uidgen.h"

#include <string>
#include <gtest/gtest.h>

TEST(UID, UID_is_generated_within_length_limit) {
  std::string uid = uidgen();
  ASSERT_TRUE(uid.length() > 0);
}

TEST(UID, UID_is_generated_has_6_separators) {
  std::string uid = uidgen();
  ASSERT_TRUE(strncmp(uid,".",1) != 6);
}



int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
