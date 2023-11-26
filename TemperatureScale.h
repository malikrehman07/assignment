namespace Temperature
{
    float CtoF (float x, float y){
    y = (((9*x)/5)+32);
    return y;
    }
    float FtoC (float x, float y){
    y = (((x-32)*5)/9);
    return y;
    }
    float CtoK (float x, float y){
    y = (x+273.15);
    return y;
    }
    float KtoC (float x, float y){
    y = (x-273.15);
    return y;
    }
    float KtoF (float x, float y){
    y = ((((x-273.15)*9)/5)+32);
    return y;
    }
    float FtoK (float x, float y){
    y = ((((x-32)*5)/9)+273.15);
    return y;
    }

} // namespace name
