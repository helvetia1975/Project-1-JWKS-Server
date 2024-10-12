#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <jwt-cpp/jwt.h>
#include <httplib.h>
#include <openssl/evp.h>
#include <openssl/pem.h>

TEST(Project1Test, BigNumToString) {
        EXPECT_EQ(bignum_to_raw_string(100000000000), "100000000000");
}

TEST(Project1Test, Base64Encoding) {
	EXPECT_EQ(base64_url_encode("41"), "A");
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
