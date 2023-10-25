

public class Resulting_Data_Type{
    public static void main(String[] args) {
        byte a=9;
        short b=8;
        System.out.println(((Object)(a+b)).getClass().getSimpleName());

        float c=(4+5)/4f; //her f is used to convert 4 into float to get ans as float
        System.out.println(c);

    }
}