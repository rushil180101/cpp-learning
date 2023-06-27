#include <iostream>
#include <string>
using namespace std;

class SFDCInput {
    private:
        string name;
        string account;
        bool disabled;
        int max_batch_size;
    public:
        void set_attributes(string, string, bool, int);
        void get_attributes();
        void execute() {
            cout << "Executing SFDCInput = " << name << endl;
        }
        void cleanup() {
            cout << "Cleanup SFDCInput = " << name << endl;
        }
        int format_data(int, int, string);
};


// Defining class functions outside the class using scope resolution operator
int SFDCInput :: format_data(int a, int b, string c) {
    int x = a + b;
    int y = c.size() * x % 5;
    return y;
}

void SFDCInput :: set_attributes(
    string parameter_name, 
    string parameter_account, 
    bool parameter_disabled, 
    int parameter_max_batch_size
) {
    name = parameter_name;
    account = parameter_account;
    disabled = parameter_disabled;
    max_batch_size = parameter_max_batch_size;
}

void SFDCInput :: get_attributes() {
    cout << "Value of name is " << name << endl;
    cout << "Value of account is " << account << endl;
    cout << "Value of disabled is " << disabled << endl;
    cout << "Value of max_batch_size is " << max_batch_size << endl;
}

class CheckpointHandler {
    public:
        string input_name;
        string ckpt_dir;
        string collection_name;

        bool check_file_ckpt() {
            cout << "Checking file ckpt exists or not ..." << endl;
            return true;
        }

        bool migrate() {
            cout << "Migrating file ckpts to collection ..." << endl;
            int status = 1;
            if (status) {
                cout << "Migration successful" << endl;
            }
            else {
                cout << "Migration failed" << endl;
            }
        }
};

int main() 
{
    // ########################## //
    freopen("inp.txt", "r", stdin );
    freopen("out.txt", "w", stdout);
    // ########################## //

    // Objects
    SFDCInput inp1;
    SFDCInput inp2;

    inp1.set_attributes("inp1", "test_acc1", true, 10);
    inp1.get_attributes();

    cout << endl;

    inp2.set_attributes("inp2", "test_acc2", false, 5);
    inp2.get_attributes();

    cout << endl;

    inp1.execute();
    inp1.cleanup();

    inp2.execute();
    inp2.cleanup();

    // Another example of classes and objects
    cout << endl << "Another example" << endl;
    CheckpointHandler ckpt_handler1;
    ckpt_handler1.input_name = "test_inp1";
    ckpt_handler1.ckpt_dir = "/root/path/";
    ckpt_handler1.collection_name = "kv_test_inp1";

    if (ckpt_handler1.check_file_ckpt()) {
        ckpt_handler1.migrate();
    }

    return 0;
}
