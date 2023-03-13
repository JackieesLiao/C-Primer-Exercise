#ifndef DESIGN_PATTERNS_SINGLETON_H
class newSingleton
{
public:
	//公有静态方法，确保类的实例仅能从Get()方法获取
	static newSingleton& Get()
	{
		static newSingleton nsl;
		return nsl;
	}
	double doSomething()
	{
		return m_doublem;
	}
private:
	//对于 Singleton 模式来说，为了保持只有一个实例的特性，
	//我们需要禁止复制，所以需要将复制构造函数和复制赋值运算符声明为私有的，
	//并且不提供其实现。这样就可以防止类的实例被复制，确保 Singleton 模式的正确实现。
	newSingleton(){}
	~newSingleton(){}

	newSingleton(const newSingleton&);
	newSingleton& operator = (const newSingleton&);
	
	double m_doublem = 9.9f;

};


#endif DESIGN_PATTERNS_SINGLETON_H
