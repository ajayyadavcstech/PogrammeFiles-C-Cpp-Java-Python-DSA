import java.util.Scanner;

public class StringMethods {
    public static void main(String[] args) {
        // // String name=new String("ajay yadav"); // one way to initialize string(string is a class and name is an object of class )
        // String name="ajay yadav"; //we can also initialize string like this 

        // //input method in string
        // Scanner input=new Scanner(System.in);
        // System.out.println("Type any character");
        // char ch =input.next().charAt(0);  //Ther is no way like(input.nextChar()) in java we have to return first char in word as character to store as a char
        // System.out.println(ch);


        // Scanner sc=new Scanner(System.in);
        // System.out.println("Write your name");
        // String name=sc.nextLine();
        // int length=name.length(); //return length of string
        // String lower_case=name.toLowerCase(); //return lower letter  


        // String non_trimmed_string="   ajay   ";
        // non_trimmed_string=non_trimmed_string.trim(); //now spaces remved (trimmed string)
        // System.out.println(non_trimmed_string);
        
        // a  j  a  y  $  y  a  d  a  v
        // 0  1  2  3  4  5  6  7  8  9
        // String name="ajay$yadav";
        // System.out.println(name.substring(0)); //return same string 
        // System.out.println(name.substring(1)); //return string starting from index 1 to end index
        // System.out.println(name.substring(1,5));//return string between index 1 to 5 (5 not included)
        // System.out.println(name.substring(1,11));//it gives error because length is 10 and here we provided 11
        
        // String name="ajay$yadav";
        // System.out.println(name.replace("a", "n")); //it replaces every character "a" to "n"
        // System.out.println(name.replace("a", "nr")); //we can also replace substring in string (here name)

        // String name="ajay";
        // System.out.println(name.startsWith("aj"));//it returns bool (here it's true)
        // System.out.println(name.startsWith("ja"));
        // System.out.println(name.endsWith("ja"));
        // System.out.println(name.endsWith("ay"));

        // String name="ajay";
        // System.out.println(name.charAt(1)); //return character at given index

        System.out.println("ajayk\b yadav"); // "\" is a escape sequence(here \b means backslash and remove k from ajayk)
        


    }
}
