#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class input_output
{
private:
    /* data */
    void read_help_file_content()
    {
        /**
         * @brief Opening file using constructor and writing it
         * string st="Harry bhai";
         * ofstream out("sample.txt");//writing operation
         * out<<st;
         * Opening files using constructor and reading it
         * ifstream in ("sample.txt");//Read operation
         * in>>st2;
         * cout<<st2;
         * newfile.open("tpoint.txt",ios::out);  // open a file to perform write operation using file object
         * if(newfile.is_open())     //checking whether the file is open
         * {
         * newfile<<"Tutorials point \n"; //inserting text
         * newfile.close(); //close the file object
         * }
         */
        fstream data_for_help_module;
        data_for_help_module.open("list_of_all_function_testfile.txt", ios::in); // open a file to perform read operation using file object
        if (data_for_help_module.is_open())                                      // checking whether the file is open
        {
            string HELP_MODULE;
            while (getline(data_for_help_module, HELP_MODULE))
            {
                cout << HELP_MODULE << "\n"; // print the data of the string
            }
            data_for_help_module.close(); // close the file object
        }
    }

public:
    void basic_logic_prompt()
    {
        // not a function made only for logic performance.
        cout << "Do you want to open this (Y|N)"
             << " : ";
        string user_logic;
        getline(cin, user_logic);
        string input_user_variables[] = {"yes", "YES", "y", "Y", "NO", "N", "n", "no", "0", "1"};
        if ((user_logic == input_user_variables[0]) || (user_logic == input_user_variables[1]) || (user_logic == input_user_variables[2]) || (user_logic == input_user_variables[3]) || (user_logic == input_user_variables[10]))
        {
            // function executed
        }
        else if ((user_logic == input_user_variables[4]) || (user_logic == input_user_variables[5]) || (user_logic == input_user_variables[6]) || (user_logic == input_user_variables[8]) || (user_logic == input_user_variables[9]))
        {
            // execute no function
        }
        else if ((user_logic != input_user_variables[10]))
        {
            cout << " '" << user_logic << "'"
                 << ",not recognized as an internal or external command, in cpp." << endl;
        }
    }
    void basic_user_prompt()
    {
        string input_user_variables[] = {"yes", "YES", "y", "Y", "NO", "N", "n", "no", "0", "1"}; // array declaration
        string system_command_user_input[] = {"cls", "Abubakar Atiq", "ABUBAKAR ATIQ", "A.ATIQ", "a.atiq", "A.atiq", "cmd", "--version", "--ver", "--VERSION", "--VER", "--v", "--V", "--help", "--HELP", "--Help", "--h", "--H", "--webhelp", "--WEBHELP", "--WH", "--wh", "py", "PY", "python", "PYTHON"};
        string input_user;
        cout << "CT--->";
        getline(cin, input_user);
        if ((input_user == input_user_variables[0]) || (input_user == input_user_variables[1]) || (input_user == input_user_variables[2]) || (input_user == input_user_variables[3]))
        {
            cout << "yes, entered.";
        }
        else if ((input_user == input_user_variables[4]) || (input_user == input_user_variables[5]) || (input_user == input_user_variables[6]) || (input_user == input_user_variables[7]))
        {
            cout << "no, entered.";
        }
        else if (input_user == system_command_user_input[6])
        {
            system("start /i cmd");
        }
        else if ((input_user == system_command_user_input[7]) || (input_user == system_command_user_input[8]) || (input_user == system_command_user_input[9]) || (input_user == system_command_user_input[10]) || (input_user == system_command_user_input[11]) || (input_user == system_command_user_input[12]))
        {
            system("echo 0.0.1-ver-3162022");
            system("echo Visit Author website Twitter@BakarAtiq");
        }
        else if ((input_user == system_command_user_input[13]) || (input_user == system_command_user_input[14]) || (input_user == system_command_user_input[15]) || (input_user == system_command_user_input[16]) || (input_user == system_command_user_input[17]))
        {
            system("echo --Help,--H,--h,--help.--HELP can be used to activate the help module.");
            system("echo Visit github.com/AbubakarAtiq");
            read_help_file_content();
        }
        else if ((input_user == system_command_user_input[18]) || (input_user == system_command_user_input[19]) || (input_user == system_command_user_input[20]) || (input_user == system_command_user_input[21]))
        {
            //--webhelp execution
            system("echo --webhelp,--WEBHELP,--wh,--WH can be used to activate web help module");
            system("echo Contact Author @ facebook.com/mohammadabubakaratiq");
            cout << "\n-->Twitter@BakarAtiq, you can found links to contact him." << endl;
            cout << "Do you want to open this (Y|N)"
                 << " : ";
            string user_logic;
            getline(cin, user_logic);
            string input_user_variables[] = {"yes", "YES", "y", "Y", "NO", "N", "n", "no", "0", "1"};
            if ((user_logic == input_user_variables[0]) || (user_logic == input_user_variables[1]) || (user_logic == input_user_variables[2]) || (user_logic == input_user_variables[3]) || (user_logic == input_user_variables[10]))
            {
                // function executed
                system("start www.facebook.com/mohammadabubakaratiq");
                system("start www.github.com/AbubakarAtiq");
            }
            else if ((user_logic == input_user_variables[4]) || (user_logic == input_user_variables[5]) || (user_logic == input_user_variables[6]) || (user_logic == input_user_variables[8]) || (user_logic == input_user_variables[9]))
            {
                // execute no function
                cout << "OK... moving on!" << endl;
            }
            else if ((user_logic != input_user_variables[10]))
            {
                cout << " '" << user_logic << "'"
                     << ",not recognized by the system." << endl;
            }
        }
        else if (input_user == system_command_user_input[0])
        {
            system("cls");
        }
        else if ((input_user == system_command_user_input[23]) || (input_user == system_command_user_input[24]) || (input_user == system_command_user_input[25]) || (input_user == system_command_user_input[26]))
        {
            string user_logic;
            cout << "Do you want to open py aka python (Y|N)"
                 << " : ";
            getline(cin, user_logic);
            string input_user_variables[] = {"yes", "YES", "y", "Y", "NO", "N", "n", "no", "0", "1"};
            if ((user_logic == input_user_variables[0]) || (user_logic == input_user_variables[1]) || (user_logic == input_user_variables[2]) || (user_logic == input_user_variables[3]) || (user_logic == input_user_variables[10]))
            {
                // function executed
                system("start py");
            }
            else if ((user_logic == input_user_variables[4]) || (user_logic == input_user_variables[5]) || (user_logic == input_user_variables[6]) || (user_logic == input_user_variables[8]) || (user_logic == input_user_variables[9]))
            {
                // execute no function
                system("echo OK....");
            }
            else if ((user_logic != input_user_variables[10]))
            {
                cout << " '" << user_logic << "'"
                     << ",not recognized by the system." << endl;
            }
        }
        else if ((input_user != input_user_variables[10]) && (input_user != system_command_user_input[26]))
        {
            cout << " '" << input_user << "'"
                 << ",is not recognized  as an internal or external command, in cpp." << endl;
            basic_user_prompt();
        }
    }
};
/*

*/