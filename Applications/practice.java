import java.util.*;
import java.io.File;
import java.io.IOException;
public class practice
{
    public static void main(String [] arg)
    {
        try
        {
            File obj = new File("Hello.txt");
            obj.createNewFile();

            if(obj.exists())
            {
                System.out.println("File Exist");
            }
        }
        catch(IOException e)
        {
            e.printStackTrace();
        }
    }
}