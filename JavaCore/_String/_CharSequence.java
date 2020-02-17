package JavaCore._String；abstract
/**
 * CharSequence翻译过来就是字符串，String我们平常也是叫作字符串，
 * 但是前者是一个接口，下面看一下接口里面的方法：
 */
public interface _CharSequence{
    int length();
    char charAt(int index);
    _CharSequence subSequence(int start,int end);
    public String toString();
}

/**
 * 来看看哪些类实现了这个接口：
 * CharSequence <--AbstractStringBuilder <--StringBuilder
 *                                       <--StringBuffer
 *              <--CharArray
 *              <--CharBuffer            <--StringCharBuffer
 *              <--StringBuilder
 *              <--StringBuffer
 */