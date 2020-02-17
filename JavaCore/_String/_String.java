package JavaCore._String;

import java.io.ObjectStreamField;
import java.io.Serializable;
import java.lang.reflect.Field;
import java.util.Arrays;
/*
    常量池(constant pool)指的是在编译期被确定，并被保存在已编译的.class文件中的一些数据。
    它包括了关于类、方法、接口等中的常量，也包括字符串常量。
    Java把内存分为堆内存跟栈内存，前者主要用来存放对象，后者用于存放基本类型变量以及对象的引用。
*/
public final class _String
    implements Serializable,Comparable<String>,CharSequence{
   
    // 成员变量    
        private static final long serialVersionUID = 1L;
        private final char value[];//final 字符数组，一旦赋值，不可更改
        private int hash;//缓存String的 hash code，默认值为0；
        private static final ObjectStreamField[] serialPersistentFields =new ObjectStreamField[0];//存储对象的序列化信息
        
        //构造函数
        //用于创建原始字符串
        // public _String (){
        //     this.value="".value;
        // }

        /**
         * String初始化
         * String str=new String("hello")
        */
        public _String(_String original) {
            this.value = original.value;
            this.hash = original.hash;
        }
        /**
         * 字符数组初始化
         */
        public _String(char value[]) {
            this.value = Arrays.copyOf(value, value.length);
        }
        /**
         * 字节数组初始化
         */
        //不指定编码
        public _String(byte bytes[]){
            this(bytes, 0, bytes.length);
        }
        public _String(byte bytes[], int offset, int length){
            checkBounds(bytes, offset, length);
            this.value = StringCoding.decode(bytes, offset, length);
        }

        //指定编码
        /**
         *  String(byte bytes[], Charset charset)
            String(byte bytes[], String charsetName)
            String(byte bytes[], int offset, int length, Charset charset)
            String(byte bytes[], int offset, int length, String charsetName)
         */

         /**
          * 通过BS构造，
            很多时候我们不会这么去构造，因为StringBuilder跟StringBuffer有toString方法，如果不考虑线程安全，优先选择StringBuilder。
          */
        public _String(StringBuffer buffer){
             synchronized(buffer){
                 this.value=Arrays.copyOf(buffer.getValue(), buffer.length());
             }
        }

        public _String(StringBuilder builder){
            this.value=Arrays.copyOf(builder.getValue(), builder.length());
        }

        /**
         * equals方法
         */
        public boolean equals(Object anObject){
            if(this==anObject){
                return true;
            }
            if(anObject instanceof _String){
                _String anotherString=(_String)anObject;
                int n=value.length;
                if(n==anotherString.value.length){
                    char v1[]=value;
                    char v2[]=anotherString.value;
                    int i=0;
                    while(n-- !=0){
                        if(v1[i]!=v2[i]){
                            return false;
                        }
                        i++;
                    }
                    return true;
                }
            }
            return false;
        }
        /**
         * hashcode方法
         */
        public int hashCode(){
            int h=hash;
            if(h==0&&value.length>0){
                char val[]=value;
                for(int i=0;i<value.length;i++){
                    h=31*h+val[i];
                }
                hash=h;
            }
            return h;
        }
        /**
         * intern方法：如果常量池中有当前String的值，就返回这个值，如果没有就加进去，返回这个值的引用
         */
        public native String intern();
        
        private static void checkBounds(byte[] bytes, int offset, int length) {
            if (length < 0)
                throw new StringIndexOutOfBoundsException(length);
            if (offset < 0)
                throw new StringIndexOutOfBoundsException(offset);
            if (offset > bytes.length - length)
                throw new StringIndexOutOfBoundsException(offset + length);
        }

    @Override
    public int length() {
        // TODO Auto-generated method stub
        return 0;
    }

    @Override
    public char charAt(int index) {
        // TODO Auto-generated method stub
        return 0;
    }

    @Override
    public CharSequence subSequence(int start, int end) {
        // TODO Auto-generated method stub
        return null;
    }

    @Override
    public int compareTo(String o) {
        // TODO Auto-generated method stub
        return 0;
    }
    }