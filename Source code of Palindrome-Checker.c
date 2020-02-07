// Chek a string weather is Palindrome or not.
//Define headder files.
#include <stdio.h>
#include <conio.h>
//Start main funcition.
//Funcition declartion.
char *_input_And_User_Value_Storer_Function(void);
_chek_String_Palindrome_Or_Not(char *);
int main(void)
{
    _input_And_User_Value_Storer_Function();
}
//Functions.
char *_input_And_User_Value_Storer_Function(void)
{
    //Declare some chracter array for store palindrome string.
    static char _user_Value_Store_On_This_Array[500];
    printf("Enter your Palindrome word or string, [Must be your string less then 500 chracter]:");
    fflush(stdin);
    gets(_user_Value_Store_On_This_Array);
    printf("Accoding to you, Your string is: %s", _user_Value_Store_On_This_Array);
    _chek_String_Palindrome_Or_Not(&_user_Value_Store_On_This_Array);
    // return _user_Value_Store_On_This_Array;
}
int _chek_String_Palindrome_Or_Not(char *_appcept_A_Pointer)
{
    char _user_Choice;
    printf("\nIf you do not include space then press \'N\' if you include space then press \'Y\' if you include case sensative then press \'C\':");
    fflush(stdin);
    scanf("%c", &_user_Choice);
    //Use the if else because chek user appcept space to chek space or do't chaek space for palindrome.
    if (_user_Choice == 'n' || _user_Choice == 'N')
    {
        char _store_Palindrome_String_On_Reverse[500];
        int _access_Palindrome_Using_appcept_A_Pointer_Loop = 0;
        int _divided_Palindrome_In_Integer;
        int _lenght_Of_The_Palindrome_Loop;
        int _lenght_Of_The_Palindrome = 0;
        int _condition_Satisfy;
        int _chek_Palindrome_Loop = 0;
        int _result_Loop1_For_Access_The_Outside_Value = 0;
        int _lenght_Of_The_Palindrome_Store_For_The_Final_Result;
        int _dicided_Result = 0;
        int _compaer_Two_String_For_Chek_Palindrome = 0;
        for (_lenght_Of_The_Palindrome_Loop = 0; _appcept_A_Pointer[_lenght_Of_The_Palindrome_Loop] != '\0'; _lenght_Of_The_Palindrome_Loop++)
        {
            if (_appcept_A_Pointer[_lenght_Of_The_Palindrome_Loop] != 32)
            {
                _lenght_Of_The_Palindrome++;
            }
        }
        _lenght_Of_The_Palindrome = _lenght_Of_The_Palindrome - 1;
        _lenght_Of_The_Palindrome_Store_For_The_Final_Result = _lenght_Of_The_Palindrome;
        // printf("%d", _lenght_Of_The_Palindrome);
        for (; _appcept_A_Pointer[_chek_Palindrome_Loop] != '\0';)
        {
            _divided_Palindrome_In_Integer = _appcept_A_Pointer[_chek_Palindrome_Loop];
            if (_divided_Palindrome_In_Integer != 32)
            {
                _condition_Satisfy = 0;
                if (_condition_Satisfy == 0)
                {
                    _store_Palindrome_String_On_Reverse[_lenght_Of_The_Palindrome] = _appcept_A_Pointer[_chek_Palindrome_Loop];
                    _condition_Satisfy++;
                }
                if (_lenght_Of_The_Palindrome == 0)
                {
                    break;
                }
                _lenght_Of_The_Palindrome--;
            }
            _chek_Palindrome_Loop++;
        }
        // printf("%d", _lenght_Of_The_Palindrome_Store_For_The_Final_Result);
        while (_appcept_A_Pointer[_result_Loop1_For_Access_The_Outside_Value] != '\0')
        {
            _divided_Palindrome_In_Integer = _appcept_A_Pointer[_result_Loop1_For_Access_The_Outside_Value];
            if (_divided_Palindrome_In_Integer != 32 && _compaer_Two_String_For_Chek_Palindrome <= _lenght_Of_The_Palindrome_Store_For_The_Final_Result)
            {
                if (_appcept_A_Pointer[_result_Loop1_For_Access_The_Outside_Value] == _store_Palindrome_String_On_Reverse[_compaer_Two_String_For_Chek_Palindrome])
                {
                    _dicided_Result = _dicided_Result + 0;
                }
                else
                {
                    _dicided_Result = _dicided_Result + 1;
                }

                _compaer_Two_String_For_Chek_Palindrome++;
            }

            _result_Loop1_For_Access_The_Outside_Value++;
        }
        if (_dicided_Result == 0)
        {
            printf("Your enterd string is an \'Palindrome\'.");
        }
        else
        {
            printf("Your enterd string is not an \'Palindrome\'.");
        }
        getchar();
    }
    else if (_user_Choice == 'y' || _user_Choice == 'Y')
    {
        //Variables.

        int _lenght_Of_The_Palindrome;
        int _chek_Palindrome_Loop = 0;
        int _condition_Satisfy;
        int _result_Loop = 0;
        int _result = 0;
        char _store_Palindrome_String_On_Reverse[500];
        //Chek palindrome or not include space.
        for (_lenght_Of_The_Palindrome = 0; _appcept_A_Pointer[_lenght_Of_The_Palindrome] != '\0'; _lenght_Of_The_Palindrome++)
            ;
        _lenght_Of_The_Palindrome = _lenght_Of_The_Palindrome - 1;
        _result_Loop = _lenght_Of_The_Palindrome;
        for (; _appcept_A_Pointer[_chek_Palindrome_Loop] != '\0';)
        {
            _condition_Satisfy = 0;
            if (_condition_Satisfy == 0)
            {
                _store_Palindrome_String_On_Reverse[_lenght_Of_The_Palindrome] = _appcept_A_Pointer[_chek_Palindrome_Loop];
                _condition_Satisfy++;
            }
            if (_lenght_Of_The_Palindrome == 0)
            {
                break;
            }

            _lenght_Of_The_Palindrome--;
            _chek_Palindrome_Loop++;
        }

        while (_result_Loop != 0)
        {
            if (_store_Palindrome_String_On_Reverse[_result_Loop] == _appcept_A_Pointer[_result_Loop])
            {
                _result = _result + 0;
            }
            else
            {
                _result = _result + 1;
                break;
            }
            _result_Loop--;
        }
        if (_result == 0)
        {
            printf("Your enterd string is an \'Palindrome\'.");
        }
        else
        {
            printf("Your enterd string is not an \'Palindrome\'.");
        }
        getchar();
    }
    else if (_user_Choice == 'c' || _user_Choice == 'C')
    {
        //Variables.

        char _store_String_After_Convert_Upper_Case[500];
        int _index_For_store_String_After_Convert_Upper_Case = 0;
        int _loop_For_Access_The_Outside_String = 0;
        int _divided_Palindrome_In_Integer;
        char _user_Choice;
        //Store outside value after convert upper case.
        while (_appcept_A_Pointer[_loop_For_Access_The_Outside_String] != '\0')
        {
            _divided_Palindrome_In_Integer = _appcept_A_Pointer[_loop_For_Access_The_Outside_String];
            if (_appcept_A_Pointer[_loop_For_Access_The_Outside_String] != '\0' && _divided_Palindrome_In_Integer != 32 && _divided_Palindrome_In_Integer != 65 && _divided_Palindrome_In_Integer != 66 && _divided_Palindrome_In_Integer != 67 && _divided_Palindrome_In_Integer != 68 && _divided_Palindrome_In_Integer != 69 && _divided_Palindrome_In_Integer != 70 && _divided_Palindrome_In_Integer != 71 && _divided_Palindrome_In_Integer != 72 && _divided_Palindrome_In_Integer != 72 && _divided_Palindrome_In_Integer != 73 && _divided_Palindrome_In_Integer != 74 && _divided_Palindrome_In_Integer != 75 && _divided_Palindrome_In_Integer != 76 && _divided_Palindrome_In_Integer != 77 && _divided_Palindrome_In_Integer != 78 && _divided_Palindrome_In_Integer != 79 && _divided_Palindrome_In_Integer != 80 && _divided_Palindrome_In_Integer != 81 && _divided_Palindrome_In_Integer != 82 && _divided_Palindrome_In_Integer != 83 && _divided_Palindrome_In_Integer != 84 && _divided_Palindrome_In_Integer != 85 && _divided_Palindrome_In_Integer != 86 && _divided_Palindrome_In_Integer != 87 && _divided_Palindrome_In_Integer != 88 && _divided_Palindrome_In_Integer != 89 && _divided_Palindrome_In_Integer != 90)
            {
                _store_String_After_Convert_Upper_Case[_index_For_store_String_After_Convert_Upper_Case] = _appcept_A_Pointer[_loop_For_Access_The_Outside_String] - 32;
                _index_For_store_String_After_Convert_Upper_Case++;
            }
            else
            {
                _store_String_After_Convert_Upper_Case[_index_For_store_String_After_Convert_Upper_Case] = _appcept_A_Pointer[_loop_For_Access_The_Outside_String];
                _index_For_store_String_After_Convert_Upper_Case++;
            }

            _loop_For_Access_The_Outside_String++;
        }
        // printf("%s", _store_String_After_Convert_Upper_Case);
        //Use of of the downward codes for chek what want user include space or not.
        printf("If you do not include space then press \'N\' if you include space then press \'Y\':");
        fflush(stdin);
        scanf("%c", &_user_Choice);
        if (_user_Choice == 'n' || _user_Choice == 'N')
        {
            char _store_Palindrome_String_On_Reverse[500];
            int _access_Palindrome_Using_appcept_A_Pointer_Loop = 0;
            int _divided_Palindrome_In_Integer;
            int _lenght_Of_The_Palindrome_Loop;
            int _lenght_Of_The_Palindrome = 0;
            int _condition_Satisfy;
            int _chek_Palindrome_Loop = 0;
            int _result_Loop1_For_Access_The_Outside_Value = 0;
            int _lenght_Of_The_Palindrome_Store_For_The_Final_Result;
            int _dicided_Result = 0;
            int _compaer_Two_String_For_Chek_Palindrome = 0;
            for (_lenght_Of_The_Palindrome_Loop = 0; _appcept_A_Pointer[_lenght_Of_The_Palindrome_Loop] != '\0'; _lenght_Of_The_Palindrome_Loop++)
            {
                if (_appcept_A_Pointer[_lenght_Of_The_Palindrome_Loop] != 32)
                {
                    _lenght_Of_The_Palindrome++;
                }
            }
            _lenght_Of_The_Palindrome = _lenght_Of_The_Palindrome - 1;
            _lenght_Of_The_Palindrome_Store_For_The_Final_Result = _lenght_Of_The_Palindrome;
            // printf("%d", _lenght_Of_The_Palindrome);
            for (; _appcept_A_Pointer[_chek_Palindrome_Loop] != '\0';)
            {
                _divided_Palindrome_In_Integer = _appcept_A_Pointer[_chek_Palindrome_Loop];
                if (_divided_Palindrome_In_Integer != 32)
                {
                    _condition_Satisfy = 0;
                    if (_condition_Satisfy == 0)
                    {
                        _store_Palindrome_String_On_Reverse[_lenght_Of_The_Palindrome] = _store_String_After_Convert_Upper_Case[_chek_Palindrome_Loop];
                        _condition_Satisfy++;
                    }
                    if (_lenght_Of_The_Palindrome == 0)
                    {
                        break;
                    }
                    _lenght_Of_The_Palindrome--;
                }
                _chek_Palindrome_Loop++;
            }
            // printf("%d", _lenght_Of_The_Palindrome_Store_For_The_Final_Result);
            while (_appcept_A_Pointer[_result_Loop1_For_Access_The_Outside_Value] != '\0')
            {
                _divided_Palindrome_In_Integer = _appcept_A_Pointer[_result_Loop1_For_Access_The_Outside_Value];
                if (_divided_Palindrome_In_Integer != 32 && _compaer_Two_String_For_Chek_Palindrome <= _lenght_Of_The_Palindrome_Store_For_The_Final_Result)
                {
                    if (_store_String_After_Convert_Upper_Case[_result_Loop1_For_Access_The_Outside_Value] == _store_Palindrome_String_On_Reverse[_compaer_Two_String_For_Chek_Palindrome])
                    {
                        _dicided_Result = _dicided_Result + 0;
                    }
                    else
                    {
                        _dicided_Result = _dicided_Result + 1;
                    }

                    _compaer_Two_String_For_Chek_Palindrome++;
                }

                _result_Loop1_For_Access_The_Outside_Value++;
            }
            if (_dicided_Result == 0)
            {
                printf("Your enterd string is an \'Palindrome\'.");
            }
            else
            {
                printf("Your enterd string is not an \'Palindrome\'.");
            }
            getchar();
        }
        else if (_user_Choice == 'y' || _user_Choice == 'Y')
        {
            //Variables.

            int _lenght_Of_The_Palindrome;
            int _chek_Palindrome_Loop = 0;
            int _condition_Satisfy;
            int _result_Loop = 0;
            int _result = 0;
            char _store_Palindrome_String_On_Reverse[500];
            //Chek palindrome or not include space.
            for (_lenght_Of_The_Palindrome = 0; _appcept_A_Pointer[_lenght_Of_The_Palindrome] != '\0'; _lenght_Of_The_Palindrome++)
                ;
            _lenght_Of_The_Palindrome = _lenght_Of_The_Palindrome - 1;
            _result_Loop = _lenght_Of_The_Palindrome;
            for (; _appcept_A_Pointer[_chek_Palindrome_Loop] != '\0';)
            {
                _condition_Satisfy = 0;
                if (_condition_Satisfy == 0)
                {
                    _store_Palindrome_String_On_Reverse[_lenght_Of_The_Palindrome] = _store_String_After_Convert_Upper_Case[_chek_Palindrome_Loop];
                    _condition_Satisfy++;
                }
                if (_lenght_Of_The_Palindrome == 0)
                {
                    break;
                }

                _lenght_Of_The_Palindrome--;
                _chek_Palindrome_Loop++;
            }

            while (_result_Loop != 0)
            {
                if (_store_Palindrome_String_On_Reverse[_result_Loop] == _store_String_After_Convert_Upper_Case[_result_Loop])
                {
                    _result = _result + 0;
                }
                else
                {
                    _result = _result + 1;
                    break;
                }
                _result_Loop--;
            }
            if (_result == 0)
            {
                printf("Your enterd string is an \'Palindrome\'.");
            }
            else
            {
                printf("Your enterd string is not an \'Palindrome\'.");
            }
        }
        else
        {
            printf("Enter right choice");
        }
    }
    else
    {
        printf("You do't enter proper option.");
    }
    getchar();
}