public class array1 {
    public static void main(String[] args) {
        int [] marks=new int[5];
        for(int i=0;i<5;i++)
        {
            marks[i]=i*2;
        }
        // for (int i = 0; i < 5; i++) {
        //         System.out.println(marks[i]);
        // }
        // String [] student={"ajay","ajeet"};
        // System.out.println(marks.length);
        // System.out.println(student.length);
        // System.out.println(student[0].length());
        
        //from marks values stored in element in every iteration then print element 
        for (int  element : marks) { //similar to python (for each loop)
            System.out.println(element);

        }
         
    }
}
