class SecureData {
    private int secretCode = 98765;
    public int getSecretCode() {
        return secretCode; // Controlled access
    }
    public static void main(String[] args) {
        SecureData data = new SecureData();
        System.out.println("Secret Code: " + data.getSecretCode());
    }
}
