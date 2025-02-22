public class AvoidNullPointer {
    public static void main(String[] args) {
        String text = null;
        if (text != null) {
            System.out.println(text.length());
        } else {
            System.out.println("Text is null!"); // Handle null case
        }
    }
}
