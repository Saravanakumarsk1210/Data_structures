#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int calculate_Postfix(string  post_exp)
{
    stack <int> stack;
    int len = post_exp.length();
    for (int i = 0; i < len; i++)
    {
           if ( post_exp[i] >= '0' &&  post_exp[i] <= '9')
        {
            stack.push( post_exp[i] - '0');
        }

        else
        {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            switch (post_exp[i])
            {
                case '+':
                          stack.push(b + a);
                          break;
                case '-':
                          stack.push(b - a);
                          break;
                case '*':
                          stack.push(b * a);
                          break;
                case '/':
                          stack.push(b / a);
                          break;
                case '^':
                          stack.push(pow(b,a));
                          break;
            }
        }
    }
    return stack.top();
}
int main()
{

    string postfix_expression ;
    cout<<"enter a postfix epression : ";
    cin>>postfix_expression;
    cout<<"\n\nThe answer after calculating the postfix expression is : ";
    cout<<calculate_Postfix(postfix_expression)<<endl;
    return 0;
}

