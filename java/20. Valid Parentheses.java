import java.util.*;
public class parenthesis_checker {
    static boolean ispar(String x) {
        Stack<Character> st = new Stack();
        for (int i = 0; i < x.length(); i++) {
            char ch = x.charAt(i);
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
                continue;
            }
            if (st.isEmpty()) {
                return false;
            }
            char top = 0;
            switch (ch) {
                case ')':
                    top = st.pop();
                    if (top == '[' || top == '{')
                        return false;
                    break;
                case ']':
                    top = st.pop();
                    if (top == '{' || top == '(')
                        return false;
                    break;
                case '}':
                    top = st.pop();
                    if (top == '[' || top == '(')
                        return false;
                    break;
            }
        }
        return st.isEmpty();
    }
    public static void main(String[] args) {
  String str = "{([])}";
  boolean s = ispar(str);
        System.out.println(s);
    }
}

