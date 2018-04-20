// GradeBook constructor used to specify the course name at the 
// time each GradeBook object is created.

public class GradeBookTest
{
   // main method begins program execution
   public static void main( String[] args )
   { 
      // create GradeBook object
      GradeBook gradeBook1 = new GradeBook( 
         "CS101 Introduction to Java Programming" ); 
      GradeBook gradeBook2 = new GradeBook( 
         "CS102 Data Structures in Java" );
      
      // display welcome messages for courses
      gradeBook1.displayMessage();
      gradeBook2.displayMessage();
	  
   } // end main
} // end class GradeBookTest
