#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000012 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000017 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000019 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001D System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000021 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000022 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000023 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000025 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000030 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000035 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000044 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000045 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000046 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000047 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000048 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000049 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000004A System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004B System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004C System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004D System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000004F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000050 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000051 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000052 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000053 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000054 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000055 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000056 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000057 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000058 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000059 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000005A System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005B System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005C System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005D System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005E System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000005F TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000060 System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x00000061 System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC (void);
// 0x00000062 System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (void);
// 0x00000063 System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x00000064 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x00000065 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x00000066 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (void);
// 0x00000067 System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern void UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F (void);
// 0x00000068 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x00000069 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x0000006A System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (void);
// 0x0000006B System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006E System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000070 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000072 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000073 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000074 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000075 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000076 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000077 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000078 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000079 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000007A System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000007C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000007F System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000081 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000082 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000083 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000084 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000085 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000086 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000087 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[135] = 
{
	SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015,
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC,
	Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4,
	UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[135] = 
{
	3571,
	3914,
	4120,
	4120,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2521,
	4146,
	3914,
	2537,
	2537,
	2537,
	3914,
	2537,
	-1,
	-1,
	4120,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[45] = 
{
	{ 0x02000005, { 70, 4 } },
	{ 0x02000006, { 74, 9 } },
	{ 0x02000007, { 85, 7 } },
	{ 0x02000008, { 94, 10 } },
	{ 0x02000009, { 106, 11 } },
	{ 0x0200000A, { 120, 9 } },
	{ 0x0200000B, { 132, 12 } },
	{ 0x0200000C, { 147, 1 } },
	{ 0x0200000D, { 148, 2 } },
	{ 0x0200000E, { 150, 2 } },
	{ 0x02000010, { 152, 3 } },
	{ 0x02000011, { 157, 5 } },
	{ 0x02000012, { 162, 7 } },
	{ 0x02000013, { 169, 3 } },
	{ 0x02000014, { 172, 7 } },
	{ 0x02000015, { 179, 4 } },
	{ 0x02000022, { 183, 3 } },
	{ 0x02000025, { 186, 21 } },
	{ 0x02000027, { 207, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 2 } },
	{ 0x0600000A, { 32, 1 } },
	{ 0x0600000B, { 33, 3 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 4 } },
	{ 0x0600000E, { 42, 4 } },
	{ 0x0600000F, { 46, 4 } },
	{ 0x06000010, { 50, 3 } },
	{ 0x06000011, { 53, 1 } },
	{ 0x06000012, { 54, 1 } },
	{ 0x06000013, { 55, 3 } },
	{ 0x06000014, { 58, 3 } },
	{ 0x06000015, { 61, 2 } },
	{ 0x06000016, { 63, 2 } },
	{ 0x06000017, { 65, 5 } },
	{ 0x06000027, { 83, 2 } },
	{ 0x0600002C, { 92, 2 } },
	{ 0x06000031, { 104, 2 } },
	{ 0x06000037, { 117, 3 } },
	{ 0x0600003C, { 129, 3 } },
	{ 0x06000041, { 144, 3 } },
	{ 0x0600004C, { 155, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[209] = 
{
	{ (Il2CppRGCTXDataType)2, 2025 },
	{ (Il2CppRGCTXDataType)3, 7795 },
	{ (Il2CppRGCTXDataType)2, 3188 },
	{ (Il2CppRGCTXDataType)2, 2700 },
	{ (Il2CppRGCTXDataType)3, 12952 },
	{ (Il2CppRGCTXDataType)2, 2116 },
	{ (Il2CppRGCTXDataType)2, 2707 },
	{ (Il2CppRGCTXDataType)3, 12987 },
	{ (Il2CppRGCTXDataType)2, 2702 },
	{ (Il2CppRGCTXDataType)3, 12964 },
	{ (Il2CppRGCTXDataType)2, 2026 },
	{ (Il2CppRGCTXDataType)3, 7796 },
	{ (Il2CppRGCTXDataType)2, 3220 },
	{ (Il2CppRGCTXDataType)2, 2712 },
	{ (Il2CppRGCTXDataType)3, 13002 },
	{ (Il2CppRGCTXDataType)2, 2133 },
	{ (Il2CppRGCTXDataType)2, 2720 },
	{ (Il2CppRGCTXDataType)3, 13166 },
	{ (Il2CppRGCTXDataType)2, 2716 },
	{ (Il2CppRGCTXDataType)3, 13077 },
	{ (Il2CppRGCTXDataType)2, 707 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 1219 },
	{ (Il2CppRGCTXDataType)3, 5159 },
	{ (Il2CppRGCTXDataType)2, 709 },
	{ (Il2CppRGCTXDataType)3, 48 },
	{ (Il2CppRGCTXDataType)3, 49 },
	{ (Il2CppRGCTXDataType)2, 1236 },
	{ (Il2CppRGCTXDataType)3, 5164 },
	{ (Il2CppRGCTXDataType)2, 2443 },
	{ (Il2CppRGCTXDataType)3, 11573 },
	{ (Il2CppRGCTXDataType)3, 5731 },
	{ (Il2CppRGCTXDataType)2, 826 },
	{ (Il2CppRGCTXDataType)3, 820 },
	{ (Il2CppRGCTXDataType)3, 821 },
	{ (Il2CppRGCTXDataType)2, 2117 },
	{ (Il2CppRGCTXDataType)3, 8394 },
	{ (Il2CppRGCTXDataType)2, 1802 },
	{ (Il2CppRGCTXDataType)2, 1387 },
	{ (Il2CppRGCTXDataType)2, 1489 },
	{ (Il2CppRGCTXDataType)2, 1592 },
	{ (Il2CppRGCTXDataType)2, 1803 },
	{ (Il2CppRGCTXDataType)2, 1388 },
	{ (Il2CppRGCTXDataType)2, 1490 },
	{ (Il2CppRGCTXDataType)2, 1593 },
	{ (Il2CppRGCTXDataType)2, 1804 },
	{ (Il2CppRGCTXDataType)2, 1389 },
	{ (Il2CppRGCTXDataType)2, 1491 },
	{ (Il2CppRGCTXDataType)2, 1594 },
	{ (Il2CppRGCTXDataType)2, 1492 },
	{ (Il2CppRGCTXDataType)2, 1595 },
	{ (Il2CppRGCTXDataType)3, 5160 },
	{ (Il2CppRGCTXDataType)2, 1059 },
	{ (Il2CppRGCTXDataType)2, 1481 },
	{ (Il2CppRGCTXDataType)2, 1482 },
	{ (Il2CppRGCTXDataType)2, 1590 },
	{ (Il2CppRGCTXDataType)3, 5158 },
	{ (Il2CppRGCTXDataType)2, 1480 },
	{ (Il2CppRGCTXDataType)2, 1589 },
	{ (Il2CppRGCTXDataType)3, 5157 },
	{ (Il2CppRGCTXDataType)2, 1386 },
	{ (Il2CppRGCTXDataType)2, 1488 },
	{ (Il2CppRGCTXDataType)2, 1385 },
	{ (Il2CppRGCTXDataType)3, 15770 },
	{ (Il2CppRGCTXDataType)3, 4607 },
	{ (Il2CppRGCTXDataType)2, 1120 },
	{ (Il2CppRGCTXDataType)2, 1484 },
	{ (Il2CppRGCTXDataType)2, 1591 },
	{ (Il2CppRGCTXDataType)2, 1682 },
	{ (Il2CppRGCTXDataType)3, 7797 },
	{ (Il2CppRGCTXDataType)3, 7799 },
	{ (Il2CppRGCTXDataType)2, 517 },
	{ (Il2CppRGCTXDataType)3, 7798 },
	{ (Il2CppRGCTXDataType)3, 7807 },
	{ (Il2CppRGCTXDataType)2, 2029 },
	{ (Il2CppRGCTXDataType)2, 2703 },
	{ (Il2CppRGCTXDataType)3, 12965 },
	{ (Il2CppRGCTXDataType)3, 7808 },
	{ (Il2CppRGCTXDataType)2, 1533 },
	{ (Il2CppRGCTXDataType)2, 1621 },
	{ (Il2CppRGCTXDataType)3, 5171 },
	{ (Il2CppRGCTXDataType)3, 15736 },
	{ (Il2CppRGCTXDataType)2, 2717 },
	{ (Il2CppRGCTXDataType)3, 13078 },
	{ (Il2CppRGCTXDataType)3, 7800 },
	{ (Il2CppRGCTXDataType)2, 2028 },
	{ (Il2CppRGCTXDataType)2, 2701 },
	{ (Il2CppRGCTXDataType)3, 12953 },
	{ (Il2CppRGCTXDataType)3, 5170 },
	{ (Il2CppRGCTXDataType)3, 7801 },
	{ (Il2CppRGCTXDataType)3, 15735 },
	{ (Il2CppRGCTXDataType)2, 2713 },
	{ (Il2CppRGCTXDataType)3, 13003 },
	{ (Il2CppRGCTXDataType)3, 7814 },
	{ (Il2CppRGCTXDataType)2, 2030 },
	{ (Il2CppRGCTXDataType)2, 2708 },
	{ (Il2CppRGCTXDataType)3, 12988 },
	{ (Il2CppRGCTXDataType)3, 8436 },
	{ (Il2CppRGCTXDataType)3, 3617 },
	{ (Il2CppRGCTXDataType)3, 5172 },
	{ (Il2CppRGCTXDataType)3, 3616 },
	{ (Il2CppRGCTXDataType)3, 7815 },
	{ (Il2CppRGCTXDataType)3, 15737 },
	{ (Il2CppRGCTXDataType)2, 2721 },
	{ (Il2CppRGCTXDataType)3, 13167 },
	{ (Il2CppRGCTXDataType)3, 7828 },
	{ (Il2CppRGCTXDataType)2, 2032 },
	{ (Il2CppRGCTXDataType)2, 2719 },
	{ (Il2CppRGCTXDataType)3, 13080 },
	{ (Il2CppRGCTXDataType)3, 7829 },
	{ (Il2CppRGCTXDataType)2, 1536 },
	{ (Il2CppRGCTXDataType)2, 1624 },
	{ (Il2CppRGCTXDataType)3, 5176 },
	{ (Il2CppRGCTXDataType)3, 5175 },
	{ (Il2CppRGCTXDataType)2, 2705 },
	{ (Il2CppRGCTXDataType)3, 12967 },
	{ (Il2CppRGCTXDataType)3, 15742 },
	{ (Il2CppRGCTXDataType)2, 2718 },
	{ (Il2CppRGCTXDataType)3, 13079 },
	{ (Il2CppRGCTXDataType)3, 7821 },
	{ (Il2CppRGCTXDataType)2, 2031 },
	{ (Il2CppRGCTXDataType)2, 2715 },
	{ (Il2CppRGCTXDataType)3, 13005 },
	{ (Il2CppRGCTXDataType)3, 5174 },
	{ (Il2CppRGCTXDataType)3, 5173 },
	{ (Il2CppRGCTXDataType)3, 7822 },
	{ (Il2CppRGCTXDataType)2, 2704 },
	{ (Il2CppRGCTXDataType)3, 12966 },
	{ (Il2CppRGCTXDataType)3, 15741 },
	{ (Il2CppRGCTXDataType)2, 2714 },
	{ (Il2CppRGCTXDataType)3, 13004 },
	{ (Il2CppRGCTXDataType)3, 7835 },
	{ (Il2CppRGCTXDataType)2, 2033 },
	{ (Il2CppRGCTXDataType)2, 2723 },
	{ (Il2CppRGCTXDataType)3, 13169 },
	{ (Il2CppRGCTXDataType)3, 8437 },
	{ (Il2CppRGCTXDataType)3, 3619 },
	{ (Il2CppRGCTXDataType)3, 5178 },
	{ (Il2CppRGCTXDataType)3, 5177 },
	{ (Il2CppRGCTXDataType)3, 3618 },
	{ (Il2CppRGCTXDataType)3, 7836 },
	{ (Il2CppRGCTXDataType)2, 2706 },
	{ (Il2CppRGCTXDataType)3, 12968 },
	{ (Il2CppRGCTXDataType)3, 15743 },
	{ (Il2CppRGCTXDataType)2, 2722 },
	{ (Il2CppRGCTXDataType)3, 13168 },
	{ (Il2CppRGCTXDataType)3, 5168 },
	{ (Il2CppRGCTXDataType)3, 5169 },
	{ (Il2CppRGCTXDataType)3, 5182 },
	{ (Il2CppRGCTXDataType)2, 3227 },
	{ (Il2CppRGCTXDataType)2, 1060 },
	{ (Il2CppRGCTXDataType)2, 712 },
	{ (Il2CppRGCTXDataType)3, 106 },
	{ (Il2CppRGCTXDataType)3, 11560 },
	{ (Il2CppRGCTXDataType)2, 2444 },
	{ (Il2CppRGCTXDataType)3, 11574 },
	{ (Il2CppRGCTXDataType)2, 827 },
	{ (Il2CppRGCTXDataType)3, 822 },
	{ (Il2CppRGCTXDataType)3, 11566 },
	{ (Il2CppRGCTXDataType)3, 3595 },
	{ (Il2CppRGCTXDataType)2, 545 },
	{ (Il2CppRGCTXDataType)3, 11561 },
	{ (Il2CppRGCTXDataType)2, 2440 },
	{ (Il2CppRGCTXDataType)3, 937 },
	{ (Il2CppRGCTXDataType)2, 864 },
	{ (Il2CppRGCTXDataType)2, 1091 },
	{ (Il2CppRGCTXDataType)3, 3601 },
	{ (Il2CppRGCTXDataType)3, 11562 },
	{ (Il2CppRGCTXDataType)3, 3590 },
	{ (Il2CppRGCTXDataType)3, 3591 },
	{ (Il2CppRGCTXDataType)3, 3589 },
	{ (Il2CppRGCTXDataType)3, 3592 },
	{ (Il2CppRGCTXDataType)2, 1087 },
	{ (Il2CppRGCTXDataType)2, 3270 },
	{ (Il2CppRGCTXDataType)3, 5166 },
	{ (Il2CppRGCTXDataType)3, 3594 },
	{ (Il2CppRGCTXDataType)2, 1463 },
	{ (Il2CppRGCTXDataType)3, 3593 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)2, 3223 },
	{ (Il2CppRGCTXDataType)2, 1508 },
	{ (Il2CppRGCTXDataType)2, 1600 },
	{ (Il2CppRGCTXDataType)3, 833 },
	{ (Il2CppRGCTXDataType)2, 829 },
	{ (Il2CppRGCTXDataType)2, 3273 },
	{ (Il2CppRGCTXDataType)3, 4625 },
	{ (Il2CppRGCTXDataType)2, 1129 },
	{ (Il2CppRGCTXDataType)3, 5576 },
	{ (Il2CppRGCTXDataType)3, 5577 },
	{ (Il2CppRGCTXDataType)3, 5582 },
	{ (Il2CppRGCTXDataType)2, 1690 },
	{ (Il2CppRGCTXDataType)3, 5579 },
	{ (Il2CppRGCTXDataType)3, 16379 },
	{ (Il2CppRGCTXDataType)2, 1092 },
	{ (Il2CppRGCTXDataType)3, 3608 },
	{ (Il2CppRGCTXDataType)1, 1458 },
	{ (Il2CppRGCTXDataType)2, 3233 },
	{ (Il2CppRGCTXDataType)3, 5578 },
	{ (Il2CppRGCTXDataType)1, 3233 },
	{ (Il2CppRGCTXDataType)1, 1690 },
	{ (Il2CppRGCTXDataType)2, 3288 },
	{ (Il2CppRGCTXDataType)2, 3233 },
	{ (Il2CppRGCTXDataType)3, 5583 },
	{ (Il2CppRGCTXDataType)3, 5581 },
	{ (Il2CppRGCTXDataType)3, 5580 },
	{ (Il2CppRGCTXDataType)2, 403 },
	{ (Il2CppRGCTXDataType)3, 3620 },
	{ (Il2CppRGCTXDataType)2, 526 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	135,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	45,
	s_rgctxIndices,
	209,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
