#pragma once
namespace MyDS
{
template<typename T>
class BasicList
{
public:
	using Val_t = T;
	using Ref_t = T&;
	using Size_t = int;

	virtual Ref_t front() = 0;	//首元素
	virtual Ref_t back() = 0;	//尾元素

	//判断是否为空表
	virtual bool IsEmpty()const = 0;
	//求表长
	virtual Size_t Size()const = 0;
	//清空表
	virtual void Clear() = 0;
	//获取固定位置的引用
	virtual Ref_t At(Size_t n) = 0;
	//获取固定位置的值
	virtual Val_t Get(Size_t n)const = 0;
	//更改固定位置的值
	virtual bool Set(Size_t n, const Val_t& v) = 0;
	//查找元素并返回其位置
	virtual Size_t Find(const Val_t& v)const = 0;
	//查找元素并返回其前驱元素位置
	virtual Size_t FindValuePrior(const Val_t& v)const = 0;
	//查找元素并返回其后继元素位置
	virtual Size_t FindValueNext(const Val_t& v)const = 0;
	//插入
	virtual bool Insert(Size_t n, const Val_t& v) = 0;
	//删除
	virtual bool Erase(const Size_t& v) = 0;
	//尾部插入
	virtual bool push_back(const Val_t& v) = 0;
	//尾部删除
	virtual bool pop_back(const Val_t& v) = 0;
	//遍历操作，F为自定义函数
	//template<typename F>
	//virtual void Foreach(const F& f) = 0;
};
}