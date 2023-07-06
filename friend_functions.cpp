#include <iostream>
#include <string>
using namespace std;

class AWSUser
{
    int user_id;
    string user_name;
    int subscription_valid;
    friend int renew_aws_user(AWSUser);
};

class AmazonUser
{
    int user_id;
    string user_name;
    int subscription_valid;
    friend int renew_amazon_user(AmazonUser);
};

int renew_aws_user(AWSUser aws_user)
{
    aws_user.subscription_valid = 1;
    return 1;
}

int renew_amazon_user(AmazonUser amazon_user)
{
    amazon_user.subscription_valid = 1;
    return 1;
}

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    AWSUser aws1;
    AmazonUser amazon1;

    int x = renew_aws_user(aws1);
    int y = renew_amazon_user(amazon1);

    return 0;
}
