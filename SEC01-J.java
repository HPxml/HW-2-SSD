import java.security.AccessController;
public class SecureAction {
    public static void main(String[] args) {
        AccessController.doPrivileged(() -> {
            System.out.println("Privileged action executed securely.");
            return null;
        });
    }
}
