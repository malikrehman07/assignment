namespace calculator
{
    int sum(int  a, int b){
        int c = a + b;
        return c;
    }
    int sub(int  a, int b){
        int c = a - b;
        return c;
    }
    int mul(int  a, int b){
        int c = a * b;
        return c;
    }
    int div(int  a, int b){
        if (b>0)
        {
             int c = (a / b);
             return c;
        }
        else
        std::cout<<"Maths error";
    }
    
} // namespace name
