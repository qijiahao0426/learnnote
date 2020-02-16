package JavaCore._Enum;

import java.util.Map;
import java.io.IOException;
import java.io.InvalidObjectException;
import java.io.ObjectInput;
import java.io.Serializable;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

//枚举类实现了Comparable和Serializable接口，那么也就意味着，每个枚举类都拥有比较（有序）和序列化功能。
public abstract class Enum<E extends Enum<E>> implements Comparable<E>, Serializable {
    protected Enum(String name, int ordinal) {
        // Enum中只有这一个构造器，其申明为protected就是为了继承它的子类（我们定义的各种枚举）来调用的。
        this.name = name;
        this.ordinal = ordinal;
    }

    // name表示的是枚举值的名称，ordinal表示的是枚举值的序号。
    private final String name;
    private final int ordinal;

    public final String name() {
        return name;
    }

    public final int ordinal() {
        return ordinal;
    }

    // 默认的equals方法底层就是使用==实现的，所以在枚举的比较使用equals和==都是可以的。前提是没有在枚举类中重写equals方法。
    // 我们可以在自定义的枚举类中重写该方法，来实现我们自己的比较方式。
    public final boolean equals(Object other) {
        return this == other;
    }

    // 这是实现了接口Comparable中的方法。用于定义比较的方式，可以看出这里是使用枚举值的序号作为比较条件的。
    public final int compareTo(E o) {
        Enum<?> other = (Enum<?>) o;
        Enum<E> self = this;
        if (self.getClass() != other.getClass() && self.getDeclaringClass() != other.getDeclaringClass()) {
            throw new ClassCastException();
        }
        return self.ordinal - other.ordinal;
    }

    public final Class<E> getDeclaringClass() {
        Class localClass1 = this.getClass();
        Class localClass2 = localClass1.getSuperclass();
        return localClass2 == Enum.class ? localClass1 : localClass2;
    }

    // 该方法的作用是获取到指定枚举类型中指定枚举名称的枚举值。
    public static <T extends Enum<T>> T valueOf(Class<T> enumType, String name) throws NoSuchMethodException,
            SecurityException, IllegalAccessException, IllegalArgumentException, InvocationTargetException {
        Method method;
        method = enumType.getClass().getDeclaredMethod("enumConstantDirectory");
        method.setAccessible(true);
        Map<String, T> o=(Map<String, T>) method.invoke(enumType);
        T result=o.get(name);
        if (result != null)
            return result;
        if (name == null)
            throw new NullPointerException("Name is null");
        throw new IllegalArgumentException(
                "No enum constant " + enumType.getCanonicalName() + "." + name);

  }

  /*
  Map<String, T> enumConstantDirectory() {
        if (enumConstantDirectory == null) {
            T[] universe = getEnumConstantsShared();
            if (universe == null)
                throw new IllegalArgumentException(
                    getName() + " is not an enum type");
            Map<String, T> m = new HashMap<>(2 * universe.length);
            for (T constant : universe)
                m.put(((Enum<?>)constant).name(), constant);
            enumConstantDirectory = m;
        }
        return enumConstantDirectory;
    }
————————————————
原文链接：https://blog.csdn.net/SeasonSoy/article/details/101058966
  */

    public final int hashCode()
    {
      return super.hashCode();
    }
    /*
        禁用的功能：
            克隆：目的为了保证单例唯一
            finalize：禁用终引用
            序列化中禁用readObject和readObjectNoData方法：目的为了保证单例唯一
    */
    protected final Object clone() throws CloneNotSupportedException{
        throw new CloneNotSupportedException();
    }

    protected final void finalize(){}
    private void readObject(ObjectInput in) throws IOException{
        throw new InvalidObjectException("can't deserialize enum");
    }
}
//final 变量一定要被初始化才能用