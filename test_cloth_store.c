#include"cloth_store_management.h"
#include <gtest/gtest.h>
namespace {
TEST(Cloth_Store_Management_Test,Add_Item) {
EXPECT_EQ("coat",add_item("coat"));
}

TEST(Cloth_Store_Management_Test,Search_Item) {
EXPECT_EQ("coat",search_item("coat"));
}

TEST(Cloth_Store_Management_Test,Cut_Item) {
EXPECT_EQ("jeans",cut_item("jeans"));
}
}

