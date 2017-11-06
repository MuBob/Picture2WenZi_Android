/**
 * Created by Administrator on 2017/11/6.
 */

public class JniManager {
    static {
        System.loadLibrary("native-lib");
    }
    public static native String getMethod();
}
