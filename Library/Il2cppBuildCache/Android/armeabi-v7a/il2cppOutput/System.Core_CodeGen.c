#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Exception System.Linq.Error::NotSupported()
extern void Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x0000000A System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000000B System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Enumerable::GroupBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::AsEnumerable(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
extern void Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415 (void);
// 0x00000018 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::RangeIterator(System.Int32,System.Int32)
extern void Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A (void);
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001A System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001E TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000021 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000022 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000023 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000026 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000027 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000028 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002A System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000030 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000045 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000048 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::.ctor(System.Int32)
// 0x00000049 System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.IDisposable.Dispose()
// 0x0000004A System.Boolean System.Linq.Enumerable/<SelectIterator>d__5`2::MoveNext()
// 0x0000004B System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::<>m__Finally1()
// 0x0000004C TResult System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000004D System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.Reset()
// 0x0000004E System.Object System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.get_Current()
// 0x0000004F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000050 System.Collections.IEnumerator System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000051 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000052 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000054 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000059 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x0000005F System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000060 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000061 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000062 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x00000063 System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x00000064 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000065 System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000066 System.Void System.Linq.Enumerable/<RangeIterator>d__115::.ctor(System.Int32)
extern void U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161 (void);
// 0x00000067 System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.IDisposable.Dispose()
extern void U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40 (void);
// 0x00000068 System.Boolean System.Linq.Enumerable/<RangeIterator>d__115::MoveNext()
extern void U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE (void);
// 0x00000069 System.Int32 System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646 (void);
// 0x0000006A System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.Reset()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059 (void);
// 0x0000006B System.Object System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680 (void);
// 0x0000006C System.Collections.Generic.IEnumerator`1<System.Int32> System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94 (void);
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerable.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B (void);
// 0x0000006E System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000006F System.Linq.Lookup`2<TKey,TElement> System.Linq.Lookup`2::Create(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000070 System.Void System.Linq.Lookup`2::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000071 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2::GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Lookup`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Int32 System.Linq.Lookup`2::InternalGetHashCode(TKey)
// 0x00000074 System.Linq.Lookup`2/Grouping<TKey,TElement> System.Linq.Lookup`2::GetGrouping(TKey,System.Boolean)
// 0x00000075 System.Void System.Linq.Lookup`2::Resize()
// 0x00000076 System.Void System.Linq.Lookup`2/Grouping::Add(TElement)
// 0x00000077 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.Lookup`2/Grouping::GetEnumerator()
// 0x00000078 System.Collections.IEnumerator System.Linq.Lookup`2/Grouping::System.Collections.IEnumerable.GetEnumerator()
// 0x00000079 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_Count()
// 0x0000007A System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.get_IsReadOnly()
// 0x0000007B System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Add(TElement)
// 0x0000007C System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Clear()
// 0x0000007D System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Contains(TElement)
// 0x0000007E System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.CopyTo(TElement[],System.Int32)
// 0x0000007F System.Boolean System.Linq.Lookup`2/Grouping::System.Collections.Generic.ICollection<TElement>.Remove(TElement)
// 0x00000080 System.Int32 System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.IndexOf(TElement)
// 0x00000081 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.Insert(System.Int32,TElement)
// 0x00000082 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.RemoveAt(System.Int32)
// 0x00000083 TElement System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.get_Item(System.Int32)
// 0x00000084 System.Void System.Linq.Lookup`2/Grouping::System.Collections.Generic.IList<TElement>.set_Item(System.Int32,TElement)
// 0x00000085 System.Void System.Linq.Lookup`2/Grouping::.ctor()
// 0x00000086 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::.ctor(System.Int32)
// 0x00000087 System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.IDisposable.Dispose()
// 0x00000088 System.Boolean System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::MoveNext()
// 0x00000089 TElement System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000008A System.Void System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
// 0x0000008B System.Object System.Linq.Lookup`2/Grouping/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
// 0x0000008C System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::.ctor(System.Int32)
// 0x0000008D System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.IDisposable.Dispose()
// 0x0000008E System.Boolean System.Linq.Lookup`2/<GetEnumerator>d__12::MoveNext()
// 0x0000008F System.Linq.IGrouping`2<TKey,TElement> System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current()
// 0x00000090 System.Void System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
// 0x00000091 System.Object System.Linq.Lookup`2/<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
// 0x00000092 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000093 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000094 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000095 System.Void System.Linq.Set`1::Resize()
// 0x00000096 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000097 System.Void System.Linq.GroupedEnumerable`3::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000098 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.GroupedEnumerable`3::GetEnumerator()
// 0x00000099 System.Collections.IEnumerator System.Linq.GroupedEnumerable`3::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009A System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000009B TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000009C System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000A0 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000A1 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000A3 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000A4 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000A5 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000A6 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000A7 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000A8 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000AB System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000AC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000AD System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000AE System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000AF System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000B1 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000B2 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000B6 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000B7 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[184] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NotSupported_m51A0560ABF374B66CF6D1208DAF27C4CBAD9AABA,
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
	Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415,
	Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A,
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
	U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161,
	U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40,
	U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B,
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
};
static const int32_t s_InvokerIndices[184] = 
{
	2396,
	2396,
	2490,
	2490,
	2490,
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
	2144,
	2144,
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
	1244,
	1521,
	1496,
	1461,
	1521,
	1472,
	1472,
	1472,
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
};
static const Il2CppTokenRangePair s_rgctxIndices[48] = 
{
	{ 0x02000004, { 64, 4 } },
	{ 0x02000005, { 68, 9 } },
	{ 0x02000006, { 79, 7 } },
	{ 0x02000007, { 88, 10 } },
	{ 0x02000008, { 100, 11 } },
	{ 0x02000009, { 114, 9 } },
	{ 0x0200000A, { 126, 12 } },
	{ 0x0200000B, { 141, 9 } },
	{ 0x0200000C, { 150, 1 } },
	{ 0x0200000D, { 151, 2 } },
	{ 0x0200000E, { 153, 11 } },
	{ 0x0200000F, { 164, 6 } },
	{ 0x02000011, { 170, 2 } },
	{ 0x02000013, { 172, 17 } },
	{ 0x02000014, { 193, 5 } },
	{ 0x02000015, { 198, 1 } },
	{ 0x02000017, { 199, 8 } },
	{ 0x02000019, { 207, 4 } },
	{ 0x0200001A, { 211, 4 } },
	{ 0x0200001B, { 215, 21 } },
	{ 0x0200001D, { 236, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 1 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 5 } },
	{ 0x0600000B, { 28, 5 } },
	{ 0x0600000C, { 33, 2 } },
	{ 0x0600000D, { 35, 1 } },
	{ 0x0600000E, { 36, 2 } },
	{ 0x0600000F, { 38, 1 } },
	{ 0x06000010, { 39, 2 } },
	{ 0x06000012, { 41, 3 } },
	{ 0x06000013, { 44, 2 } },
	{ 0x06000014, { 46, 4 } },
	{ 0x06000015, { 50, 4 } },
	{ 0x06000016, { 54, 3 } },
	{ 0x06000019, { 57, 1 } },
	{ 0x0600001A, { 58, 1 } },
	{ 0x0600001B, { 59, 3 } },
	{ 0x0600001C, { 62, 2 } },
	{ 0x0600002C, { 77, 2 } },
	{ 0x06000031, { 86, 2 } },
	{ 0x06000036, { 98, 2 } },
	{ 0x0600003C, { 111, 3 } },
	{ 0x06000041, { 123, 3 } },
	{ 0x06000046, { 138, 3 } },
	{ 0x0600006F, { 189, 4 } },
};
extern const uint32_t g_rgctx_Iterator_1_t636279D5C9025C29159E9C0F450D35FFAC93279B;
extern const uint32_t g_rgctx_Iterator_1_Where_m0335429642E75AAECFBE3A2FFB3E69C0902CD0D0;
extern const uint32_t g_rgctx_TSourceU5BU5D_tB85C233E707A0361D6D93CC945959A97B295E668;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t78D2E4CACFC7E7EF98F4400F475AA11085112BAB;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m14EFDE07937A9AD4F82AC1A74EB288C173BFB848;
extern const uint32_t g_rgctx_List_1_tE71B82DE094FF5C3CFC4CEB615B5DF14BD949490;
extern const uint32_t g_rgctx_WhereListIterator_1_tFF147832A53F8A9DE165473807DDCFD3CC89BB27;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m486D06E9DF259E0447D58D5862CD621A244EC394;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tD45416FF1F026DC4A566886D1F9A85298AE985EE;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m728988B0E986DD25EA1A1245D615A4D8C365CD58;
extern const uint32_t g_rgctx_Iterator_1_tC2E699D86C01BAC6905B98B63B33736C033E71D1;
extern const uint32_t g_rgctx_Iterator_1_Select_TisTResult_tEC92E99E2F99696D564F9F0BF815FEF3CB5ADB24_m0D623474504357AC2390442FA49A3614816C30EB;
extern const uint32_t g_rgctx_TSourceU5BU5D_t4F9441DF0F8CE638F5AE03184356E2547BE07D8B;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t2180864D420574607DB2234C9C01679FE54D8CE0;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_mDD41DB7136FC0D1BAAD6387FDF1CD6AB89DAAFAA;
extern const uint32_t g_rgctx_List_1_t4845168BC8478686CF2BBE4464D2DAFF823D0084;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_tD8B9E9B726B2A13391A120779B663B6B066FE46C;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mAEBB72130A83942691D7AD550E95275A4568F008;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_tAF002CEC5D0A77CDB9D819FDC46DD0BA58C1BBA6;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m6B03D41394EC2F95D12611A98B59B9216388D808;
extern const uint32_t g_rgctx_Enumerable_SelectIterator_TisTSource_t0CE1961451302A986C2181CA3A38F9E4A88506AC_TisTResult_t62F650E7633107B230BBBBAAD2A15B90F686A239_mB209472909ACCC455F89617253D49680DC2708C0;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_tC50DFF100B9887CE1C160E3068A7C4C0F343B8B3;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_m8F569DD9259B8E0FDA60E14C33B576914048B8FA;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_tAAE11763AA13976D45FD650D42F519700CF99D38;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m86EDAA3687D7C1F88D7F2948EB133CD52D1F67B4;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m6AC677496E624733DBE45B58781535FBE0676A8B;
extern const uint32_t g_rgctx_Func_2_tBBA43EC3AE1D3C51038FD479D6428C8DD30B04E6;
extern const uint32_t g_rgctx_Func_2__ctor_m3DFE5D5406D3378215342C16ED24C3A1E0E779E2;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_t0683908CF809AD10ED7CC6D62163918C9696939B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_m457EDCE9B47108492ADD67B0A9810080E39D1BE2;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_m3345F80CF52FB25D5B643E53940EC65D4DE624FF;
extern const uint32_t g_rgctx_Func_2_tD04771F273735C559AE55788BC543AC64480CCE3;
extern const uint32_t g_rgctx_Func_2__ctor_m5A1DFF0655E17E626732D3F1D7121D991CDB0179;
extern const uint32_t g_rgctx_GroupedEnumerable_3_t6A9BD8C5093EC2C2B7E4ED7EC77F89F4BAF482EB;
extern const uint32_t g_rgctx_GroupedEnumerable_3__ctor_mB4DC96F6AD8CA178D28D0C8B9B4036C423230836;
extern const uint32_t g_rgctx_Enumerable_DistinctIterator_TisTSource_t0E571C196610719CB0262CB18C052BADF05665E1_m4905D51260B208ADC19702C44BFF6C15AF7CE7C4;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_t59F098E3D4A7AA6B48A348A71D69042B7244EDF8;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1__ctor_m8B955A99713D9D4DCCE789E5C1AF3714F0C685F9;
extern const uint32_t g_rgctx_Enumerable_ReverseIterator_TisTSource_tB4687D837FFDBFB0FBC2E3E13559F437C67B2AF4_m38B9530DC69B5C1DEED7ABAB7826D72B3BA20B0E;
extern const uint32_t g_rgctx_U3CReverseIteratorU3Ed__79_1_tDE1B9113AF1FFE0A5CE7914540765A4C4685FD73;
extern const uint32_t g_rgctx_U3CReverseIteratorU3Ed__79_1__ctor_m6C7C67476DE2ED2CBBF3AB34093DC8B1F0B2C839;
extern const uint32_t g_rgctx_Buffer_1_tC5729D25A3E364254D0A1FCE4E06925DD5747329;
extern const uint32_t g_rgctx_Buffer_1__ctor_m222E095AE1BB3A973DDD54EF9E1B4D5B736CCD17;
extern const uint32_t g_rgctx_Buffer_1_ToArray_mC3E5B9F0AEC815A68ACDD77645E6B71FF4075C1D;
extern const uint32_t g_rgctx_List_1_tF50400EBC15D6DEEC3C43073E29EA18AE57314CC;
extern const uint32_t g_rgctx_List_1__ctor_m1AF07A5AAF7431D4835996D42244831EF686194F;
extern const uint32_t g_rgctx_IList_1_tCAC22142D45D9B5BEDC0EC4316FB0787780E59C0;
extern const uint32_t g_rgctx_ICollection_1_t304709A63D159EB9956CBC8F5384C8DC17DAB944;
extern const uint32_t g_rgctx_IEnumerable_1_t3EEB6E917754CC0F2D884B5BAF09F79D06A23371;
extern const uint32_t g_rgctx_IEnumerator_1_t3443F0B85E56B92C25A45DC489F4E78C696B382A;
extern const uint32_t g_rgctx_IList_1_t9B2C39DD1935C0159FB061115AF5530046049F74;
extern const uint32_t g_rgctx_ICollection_1_t35B5CBD8B2D72DA7EC88941F6C85DA6146A26DAB;
extern const uint32_t g_rgctx_IEnumerable_1_t5586386B55A509E36FD800F6EAAE2C2F1A01CBEB;
extern const uint32_t g_rgctx_IEnumerator_1_tD60C4749BBF149AB239D1DED16B258BCBD0E5F8F;
extern const uint32_t g_rgctx_IEnumerable_1_tD0880E4FF3F8B3DBC95295C115964852F4006BDE;
extern const uint32_t g_rgctx_IEnumerator_1_t2BDF305126D656BD2B3734A2BA28F10607A82074;
extern const uint32_t g_rgctx_Func_2_Invoke_mE9A75A107233FECEE19A1C1E3AC7D3819565F736;
extern const uint32_t g_rgctx_EmptyEnumerable_1_t461C324301407FD7CF00125C74C7BBB10E425032;
extern const uint32_t g_rgctx_IEnumerable_1_t6B558838B603B0E97AFA74C50F667305BDC94859;
extern const uint32_t g_rgctx_IEnumerable_1_tA56BDC4BCA945A181D326F97ACDDB3A23C56D75F;
extern const uint32_t g_rgctx_IEnumerator_1_t71577311A5349A81219A3AAA87F5D7C87441334D;
extern const uint32_t g_rgctx_Func_2_Invoke_m22BF94126E79C0060E291A3973838BE70CBE99EF;
extern const uint32_t g_rgctx_ICollection_1_t401C1362FA9CAA778DB957CA35F29F955A470D4D;
extern const uint32_t g_rgctx_IEnumerable_1_t0AA8DC1E145B18DB5BB6E9E999383C3368225353;
extern const uint32_t g_rgctx_Iterator_1_Clone_m16088BFE7F81DDE461A0BB4E1EA29363B7201A88;
extern const uint32_t g_rgctx_Iterator_1_get_Current_mBBDFA8B8A3ABB39089FBAAFB585F74B0645D5B9E;
extern const uint32_t g_rgctx_TSource_tE27C213B5C79D15F8C95F178F87A749A817CDA5D;
extern const uint32_t g_rgctx_Iterator_1_GetEnumerator_m13277F825C4179EF9CDE7A56336BA548EBDD8B66;
extern const uint32_t g_rgctx_Iterator_1__ctor_m7514E41D23F3DE4CFB867A3D46DFA8B2501AE00A;
extern const uint32_t g_rgctx_Iterator_1_t50B70FACDE0E1B34143E9F8CD22ACA0B10FEEC26;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tE5D85FF692C59EBD4579D71A361979792364C8C2;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mB813B1FE2E20D2DF6F0FAB6A3038EF326256668F;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m458FCA659FADA5A1CDD35B01DC76E07FC79011F6;
extern const uint32_t g_rgctx_IEnumerable_1_t014A3E7CE41868FE585432BE1E1F32DAF551BB36;
extern const uint32_t g_rgctx_IEnumerator_1_t540613216E99A3140BFFB2141072CF8D8C55007A;
extern const uint32_t g_rgctx_Func_2_Invoke_m9F7D28A9D6156DF8A1B912FFA0F747CFDBFC8D85;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_t925AD170B396F364902F7FA31791C320095C54E5_m204DB79421EDD3974CD0BFE16F7EF7B4FA48F1EA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t46C994A1424EC5EF082C585BBB32C2AD1D3D4CB3;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m08367FB68BE2F5519F0A182BD80B2D4F7424C917;
extern const uint32_t g_rgctx_Iterator_1__ctor_m26CBEC6F3738C13265ED9A1DB94EAA482E5EEA40;
extern const uint32_t g_rgctx_Iterator_1_tDCC95199B9B0AE888166B600A2150724F5886269;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t20BBB4A170F4320F138F207A6EBFB6C88FA8C6A1;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m035206C0A4EEE229CD66670619A7BDC8DDE59F9F;
extern const uint32_t g_rgctx_Func_2_Invoke_m8E3DE59DA6A8AE4BCFAA34FA8B17B381A99D11AE;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mBF633E0AC48DC442C116F953FC60AFF40436CEA9;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_t78A097556235CA68272579A40AC9ABEE8E6228C8_mE267EE8715DC4D0B54E4FFA4137132863C8C05D5;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_tF7F044DA24DECBE0E5A6AE433108FE4E8268155F;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m075E1384C767F3300E3B2B6BAE298A12DB74F92F;
extern const uint32_t g_rgctx_Iterator_1__ctor_mCC9DED6DA7E9DD65B1EF6F217D5806777C1C1C85;
extern const uint32_t g_rgctx_Iterator_1_t46EC0822C64AE0439F8EE76EB5155C7A9001F557;
extern const uint32_t g_rgctx_WhereListIterator_1_tADF109EE7959D1951D59B9C41E18BD70E5441BB9;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m9002AB02279AE8B262F8BAAA95BE527B987ED958;
extern const uint32_t g_rgctx_List_1_GetEnumerator_mAFED2F8101B027035699A20B4805B534C316344E;
extern const uint32_t g_rgctx_Enumerator_get_Current_mE985AB113BB4586F6450A4754514B631705E7065;
extern const uint32_t g_rgctx_Func_2_Invoke_m91A41D91BF9C53B5FCB823CEC4C05441E7358252;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mD2B6AE94B197322F4771CD14316E0B95B8D82E64;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mBCB5A059BDA76FBC39499E43B3D8BB751ECA6373;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_tD1ACF1646AF878DBE965885289D74649B3B828A3_m88595760E15A41A2E59213D4FBDF33DC3A92E7E6;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t8A71567888F15A3623F26A2EB610FC3763B9FF64;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mCDDF6695E39D352EBF7D6737D08A17681DDBA0EB;
extern const uint32_t g_rgctx_Iterator_1__ctor_m9C015AF4A450B4E6EB725D0A6EA193EC87089916;
extern const uint32_t g_rgctx_Iterator_1_t4A1A94CD1362426652FE8007391D7ACD149C3CAA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t7031169C0E37784A65AB4F5B17C5BF181037AF67;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mBCA01725B4D027EBDD90FF78834AF3D2322B97CD;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m9F3180789FE400C31D35F9F6D743AC390A0261D1;
extern const uint32_t g_rgctx_IEnumerable_1_t59F6FB0A645176EC2A74EFC6A6954B6A0BD8613E;
extern const uint32_t g_rgctx_IEnumerator_1_tC005608F0795FDFDD43CF49AD0A68249E3CF1555;
extern const uint32_t g_rgctx_Func_2_Invoke_m80421D41060FA82A34CE13118BDD3A56276FFEC8;
extern const uint32_t g_rgctx_Func_2_Invoke_m03A1520007AD7AA7EB571079CEEBEA13E126518D;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tFF7F615E8575AD96233222E6633A1C896E1BF3FE;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m5411CF60E5F86BF7F54AFBD1E0C95C9688B29B92;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_tC2E77D7EA4AE607508C03DFA1362450D1DB1A2C4_TisTResult_t3163C282AB187D44EE2308497F3395E3287C66FD_TisTResult2_tFB17268A1DEC3B455218E8232DBF56A873701CCE_mA318522BDC6EBB841C57419082205164CCD9F44A;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t3E5F5CEC2B587397A95F9C132A4E93577A0E9EFA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m5DC380D132EC785F06988E5FD0D09A247B0DF032;
extern const uint32_t g_rgctx_Iterator_1__ctor_m14C0DC72B8DD1FC0A32BA34CC7E04FF3106D72B8;
extern const uint32_t g_rgctx_Iterator_1_t8CC8E16A7609A1CB8D299492A8EA1452111C811D;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_tC23CA6F5F16345355F547FF9E1F2156DCD628787;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m892A5BC3C31E7332525AE5D21A1138941C2B6DE2;
extern const uint32_t g_rgctx_Func_2_Invoke_mD9083CFC73A356C4CB6A92B62C096336829907FC;
extern const uint32_t g_rgctx_Func_2_Invoke_m5945185BD815F2681A769EACBE3C582FA97CB508;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m5EC8CEF99E23E398528FE0931DCC45AED3BEBF32;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tE2CE3763D78D5CC8F4AC63AFE78B1CBD23278F43;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m86D1FEB4F9AACB36F8538594B7B38AC89E7ECB80;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t6355F355A254894D36425000DA970098D26F6EF5_TisTResult_tD6A3EE7D4ACD5F7F9E7DB9F00F3C5CC598B55E0B_TisTResult2_tFB11D70CFC9A6D39CD2859C8E269998B71091CE7_m39F57864AB4D3B8C44CEC60B4BB6810ACC474BA4;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t738B3298CEC205A75135CED719B96FDCB3E19DB8;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_mCC0D6C5D6838B379F2E5934F6166D00E0D30D61F;
extern const uint32_t g_rgctx_Iterator_1__ctor_mB57E6479A26693AC3E3228153DF5C3FF9244E556;
extern const uint32_t g_rgctx_Iterator_1_t82B5A713AD6A0AEEA492B6EDD94AB36C177FB31E;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t729D3E7AAD664CE67089CB48A807AC3E9301DD45;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m4243EB70AC53128B69B768C753E22F06EC6C2F95;
extern const uint32_t g_rgctx_List_1_GetEnumerator_mABC2F0913AC1FB53A0A06DE4F593B0A59BC3014C;
extern const uint32_t g_rgctx_Enumerator_get_Current_mFB62C9BD7171865F3CFC87C8311E2C462791ACA0;
extern const uint32_t g_rgctx_Func_2_Invoke_m27C03DB3F8030B00F631ADE2CD1A9DDF18D5ED23;
extern const uint32_t g_rgctx_Func_2_Invoke_mE86C4D09C2F79FDFB4EA23E08D328E5EEAEC9639;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m5C1C72BBB604DBBCBC5F0B6A885FB61372D4CA65;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m131C1D6FE9A3EF2550ADE8B2F01ED31A4B4CD89E;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tF93BB76CC2E74178734ACB7F539BF5F5781032CC;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m5598588FA12141BFE352C9917F5398566B7074BB;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t35717B0D8465F7BF2FF374E22BFDE014E9CCAB7B_TisTResult_tEC155615E1838A087179B679DA38A5AB1DCB49F6_TisTResult2_t90E635D774BCB207895EA3440CF7DA243ADF7314_m243CCC2FD2B5576E0648150487553604A7579102;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t6461584B4A18CBB697BC8E65661BD2EDC3144F29;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m0CABE000C6C9936C0A0DCBDAB0CE517E636F36F7;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_U3CU3Em__Finally1_m050074DB4F51F52D574D9B5115CFB040BA65DA78;
extern const uint32_t g_rgctx_IEnumerable_1_t6E240FDBB7ED1FE44B014C0FB35971DCEC84855C;
extern const uint32_t g_rgctx_IEnumerator_1_t7FE10D42ADED2F3E416BAE4BFD911DF152208300;
extern const uint32_t g_rgctx_Func_3_Invoke_m99BD7C0BDB6DECB7E2C6559454B90DD9939A4D77;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_System_IDisposable_Dispose_m0220A1C8F1FA9BEEB6A18C6273D18BEC91B555FD;
extern const uint32_t g_rgctx_TResult_tDDEB83A02E7DDB0E932B2B5A5DA8D474276144AE;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_tF3302E53A050DEEB7F14179F368DC824E31AF270;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_mDF2E3C83A960DC08B38464BBD9BBA55F2F4F3BD4;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mE1AFD48D99037F90008FBB0EFB8EFC688EB6BD45;
extern const uint32_t g_rgctx_Func_2_Invoke_m9A6744C087A6AC603C2858E37C8EB93CC6694884;
extern const uint32_t g_rgctx_Func_2_Invoke_mAC80E45654022092175F6F9E4FF0BF5987266C9C;
extern const uint32_t g_rgctx_Func_2_Invoke_m6633A2B4AF28FAD626AC68367C19680E515B512B;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mD4531A7D4BD3B22E8D8A0ACCA1DA1A26E5F0FCF5;
extern const uint32_t g_rgctx_Set_1_tDDEBCCD4267EADBEAD418EA68B8CFE969934E6CA;
extern const uint32_t g_rgctx_Set_1__ctor_m47D0AAC0F788D78617F248C3F8DE145BB533FB47;
extern const uint32_t g_rgctx_IEnumerable_1_tA8804804FF1BE0FF5CACECC285966CA0FC22C3E1;
extern const uint32_t g_rgctx_IEnumerator_1_tB08699944DA8173C64C3681A71470C486BB16869;
extern const uint32_t g_rgctx_Set_1_Add_mF59AF262F9DC378A888E7813216258346FE7AB7C;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mC3516C181C0C044E2C26C45F01A8C0D3C8B30E19;
extern const uint32_t g_rgctx_TSource_t697899CBCDA152205DB88C81CCA96B258CB82796;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_t6A61376FB2E7178EB6622EFD71E4A7EB03A27AF4;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1__ctor_m2AD2C085F4FFD62317C6BE67A330D0F35C4C915D;
extern const uint32_t g_rgctx_U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mE1A2A621D2345E46873DC1838C04CAA500429E98;
extern const uint32_t g_rgctx_Buffer_1_tF07772F10830F0867CD54B9F4C49A179DE58FF42;
extern const uint32_t g_rgctx_Buffer_1__ctor_mE39FA434D7637057DC380F66DB593F8A6876E34E;
extern const uint32_t g_rgctx_TSource_t83E5F8A75DE20D1A2251D0474CAEA3A42615AD63;
extern const uint32_t g_rgctx_U3CReverseIteratorU3Ed__79_1_tFD7A9286360E665E753789C1DECD64B6ECDA8D97;
extern const uint32_t g_rgctx_U3CReverseIteratorU3Ed__79_1__ctor_m55779DEBCB3C771E0B44AE3E2D6ABBFF8761F56C;
extern const uint32_t g_rgctx_U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m4C5A8AA493F5C9B3FD5FCD40ECE4041D9F375B13;
extern const uint32_t g_rgctx_TElementU5BU5D_t8A94C4BFBF9E6BF79B51985125A00CE6111046BD;
extern const uint32_t g_rgctx_EmptyEnumerable_1_t61D763760D8F245D25A64A37EA22E49B6A61D33F;
extern const uint32_t g_rgctx_Lookup_2_t31F78E93BFB846CA2D3944E40B03A4E3DDE6A614;
extern const uint32_t g_rgctx_Lookup_2__ctor_m920FA1A67420F30E9A99A73F74935FE16CCB7DCA;
extern const uint32_t g_rgctx_Lookup_2_GetGrouping_mF28388BA6DC02F7A11003230B0771761E177B3CC;
extern const uint32_t g_rgctx_Grouping_Add_mD047324E5C6CE07A23F1DA7706A5FA0C0C85C35E;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_mE0AFD303A3D49228C108C783196526C2C2838738;
extern const uint32_t g_rgctx_EqualityComparer_1_t39547BB62FDF2E0458C9D1F98B99BB7805A21514;
extern const uint32_t g_rgctx_GroupingU5BU5D_t15D97B6173684F736466731E6C0E0971702DA4FE;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__12_t537CE71AF0C2B3F5D94C27A91CB4DD4EA9861355;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__12__ctor_m122E85D9A70BD3EACB7CA4BA53B6213686F869A6;
extern const uint32_t g_rgctx_Lookup_2_GetEnumerator_m5AA3B1BE4D03D1D36A98D1AFBD4607C3EBB244D9;
extern const uint32_t g_rgctx_TKey_t7518B94CFEBCBDFD89737409C77350621A54669D;
extern const uint32_t g_rgctx_IEqualityComparer_1_tCF9369A523FE68BDDE93FD47541225C476900953;
extern const uint32_t g_rgctx_Lookup_2_InternalGetHashCode_m8BA5731C950E4C5F090FFB985B505389AE540D49;
extern const uint32_t g_rgctx_Lookup_2_Resize_mC4A2772C5D27527B873AF6670CB5A6F2B4E057BE;
extern const uint32_t g_rgctx_Grouping_tE74A3126B3267FC0587D6D5E2EF780D29E9DC649;
extern const uint32_t g_rgctx_Grouping__ctor_mA40B18DDB0B49A2ED79B524B505E9DB8998BF3FA;
extern const uint32_t g_rgctx_TElementU5BU5D_t93028857AD2A56FDA6CD6DC458BFC620AAD8391E;
extern const uint32_t g_rgctx_IEnumerable_1_t2C868C873DF7EA4359385DAF53CA7ACB96CB956D;
extern const uint32_t g_rgctx_IEnumerator_1_tBF322ED7F64E0A111FA43366F150AAFE05A86157;
extern const uint32_t g_rgctx_Func_2_Invoke_m36C8A424F3E14B2A8980522FE7F7172B5C6C728B;
extern const uint32_t g_rgctx_Func_2_Invoke_m82A6879D5450E7E851761E8D1FD962AEA657B40D;
extern const uint32_t g_rgctx_Array_Resize_TisTElement_t02A0F65F8184390B8E69997904D5AE44C19EBAA0_mF5EC1E0159713C021C2EEC50106327242688BCAC;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__7_t6A6AE7D01D29BDC1764289562767205A6F06561E;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__7__ctor_mB54EDFF4FE9E97CBFC8C5B16C41EF764B290593B;
extern const uint32_t g_rgctx_Grouping_GetEnumerator_m13259DF1A2CA7716091F4A36EF9DCA6F6C8BF003;
extern const uint32_t g_rgctx_Array_IndexOf_TisTElement_t02A0F65F8184390B8E69997904D5AE44C19EBAA0_m0E27A4B8C4E4C0E5CEF80A9BD51D0DC319649D6A;
extern const uint32_t g_rgctx_TElement_tDE19722F134B9431747709B2914E337ADEB691C1;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m0ACEA98E0F309527422B734EC2D6F838F42E855A;
extern const uint32_t g_rgctx_EqualityComparer_1_tE98C8758DC67BAC10BC58A6EAF2BC7702037261D;
extern const uint32_t g_rgctx_SlotU5BU5D_t59C5931DEEAB28C10C90F90194F7BA255205FF0C;
extern const uint32_t g_rgctx_Set_1_Find_m960A4C3A4D4AA1B1E999EF848750BBE1A7D926F7;
extern const uint32_t g_rgctx_Set_1_InternalGetHashCode_m9B51B4A88084A8FDB38514325ECF1F61E2D272DA;
extern const uint32_t g_rgctx_IEqualityComparer_1_t3CB967F967F4706563FB9E277A60032CD22D6832;
extern const uint32_t g_rgctx_Set_1_Resize_m93FE9D1D00D5F0FC34818A15B4F62F95E55F075A;
extern const uint32_t g_rgctx_TElement_t675859134FC8712282763A8D72CA128B8B43DD5D;
extern const uint32_t g_rgctx_Lookup_2_Create_TisTSource_t95933129C248BBBE3B532BA8CFB5350A22311796_m141D6282A56A115DE5D096179676481A9802E0E2;
extern const uint32_t g_rgctx_Lookup_2_t18A588C0C5E56D50B17CDE7ED4798AECE00E5A2E;
extern const uint32_t g_rgctx_Lookup_2_GetEnumerator_mA3662CF25C60F4598B6A586071A5A2B11A39BB64;
extern const uint32_t g_rgctx_GroupedEnumerable_3_GetEnumerator_m7308C41BCA816D940D195E8651272EC1C27A4CEF;
extern const uint32_t g_rgctx_ICollection_1_t7C426FF7559846CA5118EB7658EEC1A091C8D99B;
extern const uint32_t g_rgctx_TElementU5BU5D_t7794BEA974AC676D685D83352F37C7ADBF84BD60;
extern const uint32_t g_rgctx_IEnumerable_1_tD73EF5A715E0D735FB8796582DF7DAAE59248A28;
extern const uint32_t g_rgctx_IEnumerator_1_t721019D94B9F297B40CA782A203E918DCEF86D3E;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m0E4BF9A3FBB72E07033EA16B23935DD2A753BE7E;
extern const uint32_t g_rgctx_EqualityComparer_1_t57E7B5874DDB8ED0BBCF9EA1E8EE5E482DB475BF;
extern const uint32_t g_rgctx_HashSet_1__ctor_m59687428EFF3A060C7E4A58B33D8CCB1866245DB;
extern const uint32_t g_rgctx_HashSet_1_AddIfNotPresent_mD32BD7F09DDC0123D28A33C4E91499817AEBDE5A;
extern const uint32_t g_rgctx_HashSet_1_InternalGetHashCode_mDF2E29D60C603DBF5BE68A3DAD153D124902A38D;
extern const uint32_t g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m2CEA36CE0A9828B0D2817BABB0778E9B7CC2D23B;
extern const uint32_t g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_tFA70BB9403614A86785198F7670E8A79579D96AA_mE4CF1DE156A56C76F3D17E5D356B4592BF76045B;
extern const uint32_t g_rgctx_Enumerator_t3B01BF569E0DDC9775F15A857D58FB5891FF9794;
extern const uint32_t g_rgctx_Enumerator__ctor_mF6352008F027267A6D46E84C5EE5A593C2008B31;
extern const uint32_t g_rgctx_IComparer_1_tAC617197608B3A3B8581D014191E97687ACBDC73;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m3C429D78A2E5EB4297C0E1913DB8D3E719AF41E9;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357;
extern const uint32_t g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_HashSet_1_SetCapacity_mA30C348AE8DA2CB53D157195B16A8EF0AF88F810;
extern const uint32_t g_rgctx_HashSet_1_Initialize_m388A18FBF12F617107200961B7E4736E2B032820;
extern const uint32_t g_rgctx_HashSet_1_IncreaseCapacity_mA3287035E39B231BF0B2B4CDEFA182530F54F0DB;
extern const uint32_t g_rgctx_T_tFA70BB9403614A86785198F7670E8A79579D96AA;
extern const uint32_t g_rgctx_Enumerator_get_Current_m5AF8DAD51CCB7D8472437E484EE9ECA33FACD0C8;
extern const uint32_t g_rgctx_T_t915F5DD3D2E812A343EBC3FB68983028184D4B2A;
static const Il2CppRGCTXDefinition s_rgctxValues[238] = 
{
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t636279D5C9025C29159E9C0F450D35FFAC93279B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Where_m0335429642E75AAECFBE3A2FFB3E69C0902CD0D0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSourceU5BU5D_tB85C233E707A0361D6D93CC945959A97B295E668 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1_t78D2E4CACFC7E7EF98F4400F475AA11085112BAB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1__ctor_m14EFDE07937A9AD4F82AC1A74EB288C173BFB848 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_tE71B82DE094FF5C3CFC4CEB615B5DF14BD949490 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1_tFF147832A53F8A9DE165473807DDCFD3CC89BB27 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1__ctor_m486D06E9DF259E0447D58D5862CD621A244EC394 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tD45416FF1F026DC4A566886D1F9A85298AE985EE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m728988B0E986DD25EA1A1245D615A4D8C365CD58 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_tC2E699D86C01BAC6905B98B63B33736C033E71D1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Select_TisTResult_tEC92E99E2F99696D564F9F0BF815FEF3CB5ADB24_m0D623474504357AC2390442FA49A3614816C30EB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSourceU5BU5D_t4F9441DF0F8CE638F5AE03184356E2547BE07D8B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_t2180864D420574607DB2234C9C01679FE54D8CE0 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_mDD41DB7136FC0D1BAAD6387FDF1CD6AB89DAAFAA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_t4845168BC8478686CF2BBE4464D2DAFF823D0084 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_tD8B9E9B726B2A13391A120779B663B6B066FE46C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_mAEBB72130A83942691D7AD550E95275A4568F008 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_tAF002CEC5D0A77CDB9D819FDC46DD0BA58C1BBA6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m6B03D41394EC2F95D12611A98B59B9216388D808 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_SelectIterator_TisTSource_t0CE1961451302A986C2181CA3A38F9E4A88506AC_TisTResult_t62F650E7633107B230BBBBAAD2A15B90F686A239_mB209472909ACCC455F89617253D49680DC2708C0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_tC50DFF100B9887CE1C160E3068A7C4C0F343B8B3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_m8F569DD9259B8E0FDA60E14C33B576914048B8FA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_tAAE11763AA13976D45FD650D42F519700CF99D38 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m86EDAA3687D7C1F88D7F2948EB133CD52D1F67B4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m6AC677496E624733DBE45B58781535FBE0676A8B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_tBBA43EC3AE1D3C51038FD479D6428C8DD30B04E6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2__ctor_m3DFE5D5406D3378215342C16ED24C3A1E0E779E2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_t0683908CF809AD10ED7CC6D62163918C9696939B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_m457EDCE9B47108492ADD67B0A9810080E39D1BE2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_m3345F80CF52FB25D5B643E53940EC65D4DE624FF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_tD04771F273735C559AE55788BC543AC64480CCE3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2__ctor_m5A1DFF0655E17E626732D3F1D7121D991CDB0179 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_GroupedEnumerable_3_t6A9BD8C5093EC2C2B7E4ED7EC77F89F4BAF482EB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_GroupedEnumerable_3__ctor_mB4DC96F6AD8CA178D28D0C8B9B4036C423230836 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_DistinctIterator_TisTSource_t0E571C196610719CB0262CB18C052BADF05665E1_m4905D51260B208ADC19702C44BFF6C15AF7CE7C4 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_t59F098E3D4A7AA6B48A348A71D69042B7244EDF8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1__ctor_m8B955A99713D9D4DCCE789E5C1AF3714F0C685F9 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_ReverseIterator_TisTSource_tB4687D837FFDBFB0FBC2E3E13559F437C67B2AF4_m38B9530DC69B5C1DEED7ABAB7826D72B3BA20B0E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CReverseIteratorU3Ed__79_1_tDE1B9113AF1FFE0A5CE7914540765A4C4685FD73 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CReverseIteratorU3Ed__79_1__ctor_m6C7C67476DE2ED2CBBF3AB34093DC8B1F0B2C839 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_tC5729D25A3E364254D0A1FCE4E06925DD5747329 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1__ctor_m222E095AE1BB3A973DDD54EF9E1B4D5B736CCD17 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_ToArray_mC3E5B9F0AEC815A68ACDD77645E6B71FF4075C1D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_tF50400EBC15D6DEEC3C43073E29EA18AE57314CC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1__ctor_m1AF07A5AAF7431D4835996D42244831EF686194F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IList_1_tCAC22142D45D9B5BEDC0EC4316FB0787780E59C0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t304709A63D159EB9956CBC8F5384C8DC17DAB944 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t3EEB6E917754CC0F2D884B5BAF09F79D06A23371 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t3443F0B85E56B92C25A45DC489F4E78C696B382A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IList_1_t9B2C39DD1935C0159FB061115AF5530046049F74 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t35B5CBD8B2D72DA7EC88941F6C85DA6146A26DAB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t5586386B55A509E36FD800F6EAAE2C2F1A01CBEB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tD60C4749BBF149AB239D1DED16B258BCBD0E5F8F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tD0880E4FF3F8B3DBC95295C115964852F4006BDE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t2BDF305126D656BD2B3734A2BA28F10607A82074 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mE9A75A107233FECEE19A1C1E3AC7D3819565F736 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EmptyEnumerable_1_t461C324301407FD7CF00125C74C7BBB10E425032 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t6B558838B603B0E97AFA74C50F667305BDC94859 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tA56BDC4BCA945A181D326F97ACDDB3A23C56D75F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t71577311A5349A81219A3AAA87F5D7C87441334D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m22BF94126E79C0060E291A3973838BE70CBE99EF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t401C1362FA9CAA778DB957CA35F29F955A470D4D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t0AA8DC1E145B18DB5BB6E9E999383C3368225353 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Clone_m16088BFE7F81DDE461A0BB4E1EA29363B7201A88 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_get_Current_mBBDFA8B8A3ABB39089FBAAFB585F74B0645D5B9E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_tE27C213B5C79D15F8C95F178F87A749A817CDA5D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_GetEnumerator_m13277F825C4179EF9CDE7A56336BA548EBDD8B66 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m7514E41D23F3DE4CFB867A3D46DFA8B2501AE00A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t50B70FACDE0E1B34143E9F8CD22ACA0B10FEEC26 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tE5D85FF692C59EBD4579D71A361979792364C8C2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_mB813B1FE2E20D2DF6F0FAB6A3038EF326256668F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m458FCA659FADA5A1CDD35B01DC76E07FC79011F6 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t014A3E7CE41868FE585432BE1E1F32DAF551BB36 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t540613216E99A3140BFFB2141072CF8D8C55007A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m9F7D28A9D6156DF8A1B912FFA0F747CFDBFC8D85 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_t925AD170B396F364902F7FA31791C320095C54E5_m204DB79421EDD3974CD0BFE16F7EF7B4FA48F1EA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t46C994A1424EC5EF082C585BBB32C2AD1D3D4CB3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m08367FB68BE2F5519F0A182BD80B2D4F7424C917 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m26CBEC6F3738C13265ED9A1DB94EAA482E5EEA40 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_tDCC95199B9B0AE888166B600A2150724F5886269 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1_t20BBB4A170F4320F138F207A6EBFB6C88FA8C6A1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1__ctor_m035206C0A4EEE229CD66670619A7BDC8DDE59F9F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m8E3DE59DA6A8AE4BCFAA34FA8B17B381A99D11AE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_mBF633E0AC48DC442C116F953FC60AFF40436CEA9 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_t78A097556235CA68272579A40AC9ABEE8E6228C8_mE267EE8715DC4D0B54E4FFA4137132863C8C05D5 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_tF7F044DA24DECBE0E5A6AE433108FE4E8268155F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m075E1384C767F3300E3B2B6BAE298A12DB74F92F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_mCC9DED6DA7E9DD65B1EF6F217D5806777C1C1C85 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t46EC0822C64AE0439F8EE76EB5155C7A9001F557 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1_tADF109EE7959D1951D59B9C41E18BD70E5441BB9 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1__ctor_m9002AB02279AE8B262F8BAAA95BE527B987ED958 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_GetEnumerator_mAFED2F8101B027035699A20B4805B534C316344E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_mE985AB113BB4586F6450A4754514B631705E7065 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m91A41D91BF9C53B5FCB823CEC4C05441E7358252 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_MoveNext_mD2B6AE94B197322F4771CD14316E0B95B8D82E64 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_mBCB5A059BDA76FBC39499E43B3D8BB751ECA6373 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_tD1ACF1646AF878DBE965885289D74649B3B828A3_m88595760E15A41A2E59213D4FBDF33DC3A92E7E6 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t8A71567888F15A3623F26A2EB610FC3763B9FF64 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_mCDDF6695E39D352EBF7D6737D08A17681DDBA0EB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m9C015AF4A450B4E6EB725D0A6EA193EC87089916 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t4A1A94CD1362426652FE8007391D7ACD149C3CAA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t7031169C0E37784A65AB4F5B17C5BF181037AF67 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mBCA01725B4D027EBDD90FF78834AF3D2322B97CD },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m9F3180789FE400C31D35F9F6D743AC390A0261D1 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t59F6FB0A645176EC2A74EFC6A6954B6A0BD8613E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tC005608F0795FDFDD43CF49AD0A68249E3CF1555 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m80421D41060FA82A34CE13118BDD3A56276FFEC8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m03A1520007AD7AA7EB571079CEEBEA13E126518D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tFF7F615E8575AD96233222E6633A1C896E1BF3FE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m5411CF60E5F86BF7F54AFBD1E0C95C9688B29B92 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_tC2E77D7EA4AE607508C03DFA1362450D1DB1A2C4_TisTResult_t3163C282AB187D44EE2308497F3395E3287C66FD_TisTResult2_tFB17268A1DEC3B455218E8232DBF56A873701CCE_mA318522BDC6EBB841C57419082205164CCD9F44A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t3E5F5CEC2B587397A95F9C132A4E93577A0E9EFA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m5DC380D132EC785F06988E5FD0D09A247B0DF032 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m14C0DC72B8DD1FC0A32BA34CC7E04FF3106D72B8 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t8CC8E16A7609A1CB8D299492A8EA1452111C811D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_tC23CA6F5F16345355F547FF9E1F2156DCD628787 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m892A5BC3C31E7332525AE5D21A1138941C2B6DE2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mD9083CFC73A356C4CB6A92B62C096336829907FC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m5945185BD815F2681A769EACBE3C582FA97CB508 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m5EC8CEF99E23E398528FE0931DCC45AED3BEBF32 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tE2CE3763D78D5CC8F4AC63AFE78B1CBD23278F43 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m86D1FEB4F9AACB36F8538594B7B38AC89E7ECB80 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t6355F355A254894D36425000DA970098D26F6EF5_TisTResult_tD6A3EE7D4ACD5F7F9E7DB9F00F3C5CC598B55E0B_TisTResult2_tFB11D70CFC9A6D39CD2859C8E269998B71091CE7_m39F57864AB4D3B8C44CEC60B4BB6810ACC474BA4 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_t738B3298CEC205A75135CED719B96FDCB3E19DB8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_mCC0D6C5D6838B379F2E5934F6166D00E0D30D61F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_mB57E6479A26693AC3E3228153DF5C3FF9244E556 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t82B5A713AD6A0AEEA492B6EDD94AB36C177FB31E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t729D3E7AAD664CE67089CB48A807AC3E9301DD45 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_m4243EB70AC53128B69B768C753E22F06EC6C2F95 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_GetEnumerator_mABC2F0913AC1FB53A0A06DE4F593B0A59BC3014C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_mFB62C9BD7171865F3CFC87C8311E2C462791ACA0 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m27C03DB3F8030B00F631ADE2CD1A9DDF18D5ED23 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mE86C4D09C2F79FDFB4EA23E08D328E5EEAEC9639 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_MoveNext_m5C1C72BBB604DBBCBC5F0B6A885FB61372D4CA65 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m131C1D6FE9A3EF2550ADE8B2F01ED31A4B4CD89E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tF93BB76CC2E74178734ACB7F539BF5F5781032CC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m5598588FA12141BFE352C9917F5398566B7074BB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t35717B0D8465F7BF2FF374E22BFDE014E9CCAB7B_TisTResult_tEC155615E1838A087179B679DA38A5AB1DCB49F6_TisTResult2_t90E635D774BCB207895EA3440CF7DA243ADF7314_m243CCC2FD2B5576E0648150487553604A7579102 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t6461584B4A18CBB697BC8E65661BD2EDC3144F29 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_m0CABE000C6C9936C0A0DCBDAB0CE517E636F36F7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_U3CU3Em__Finally1_m050074DB4F51F52D574D9B5115CFB040BA65DA78 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t6E240FDBB7ED1FE44B014C0FB35971DCEC84855C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t7FE10D42ADED2F3E416BAE4BFD911DF152208300 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_3_Invoke_m99BD7C0BDB6DECB7E2C6559454B90DD9939A4D77 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_System_IDisposable_Dispose_m0220A1C8F1FA9BEEB6A18C6273D18BEC91B555FD },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TResult_tDDEB83A02E7DDB0E932B2B5A5DA8D474276144AE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_tF3302E53A050DEEB7F14179F368DC824E31AF270 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_mDF2E3C83A960DC08B38464BBD9BBA55F2F4F3BD4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mE1AFD48D99037F90008FBB0EFB8EFC688EB6BD45 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m9A6744C087A6AC603C2858E37C8EB93CC6694884 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mAC80E45654022092175F6F9E4FF0BF5987266C9C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m6633A2B4AF28FAD626AC68367C19680E515B512B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mD4531A7D4BD3B22E8D8A0ACCA1DA1A26E5F0FCF5 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_tDDEBCCD4267EADBEAD418EA68B8CFE969934E6CA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1__ctor_m47D0AAC0F788D78617F248C3F8DE145BB533FB47 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tA8804804FF1BE0FF5CACECC285966CA0FC22C3E1 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tB08699944DA8173C64C3681A71470C486BB16869 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_Add_mF59AF262F9DC378A888E7813216258346FE7AB7C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mC3516C181C0C044E2C26C45F01A8C0D3C8B30E19 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_t697899CBCDA152205DB88C81CCA96B258CB82796 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_t6A61376FB2E7178EB6622EFD71E4A7EB03A27AF4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1__ctor_m2AD2C085F4FFD62317C6BE67A330D0F35C4C915D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mE1A2A621D2345E46873DC1838C04CAA500429E98 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_tF07772F10830F0867CD54B9F4C49A179DE58FF42 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1__ctor_mE39FA434D7637057DC380F66DB593F8A6876E34E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_t83E5F8A75DE20D1A2251D0474CAEA3A42615AD63 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CReverseIteratorU3Ed__79_1_tFD7A9286360E665E753789C1DECD64B6ECDA8D97 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CReverseIteratorU3Ed__79_1__ctor_m55779DEBCB3C771E0B44AE3E2D6ABBFF8761F56C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m4C5A8AA493F5C9B3FD5FCD40ECE4041D9F375B13 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElementU5BU5D_t8A94C4BFBF9E6BF79B51985125A00CE6111046BD },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EmptyEnumerable_1_t61D763760D8F245D25A64A37EA22E49B6A61D33F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_t31F78E93BFB846CA2D3944E40B03A4E3DDE6A614 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2__ctor_m920FA1A67420F30E9A99A73F74935FE16CCB7DCA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_GetGrouping_mF28388BA6DC02F7A11003230B0771761E177B3CC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Grouping_Add_mD047324E5C6CE07A23F1DA7706A5FA0C0C85C35E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_mE0AFD303A3D49228C108C783196526C2C2838738 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_t39547BB62FDF2E0458C9D1F98B99BB7805A21514 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_GroupingU5BU5D_t15D97B6173684F736466731E6C0E0971702DA4FE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__12_t537CE71AF0C2B3F5D94C27A91CB4DD4EA9861355 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__12__ctor_m122E85D9A70BD3EACB7CA4BA53B6213686F869A6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_GetEnumerator_m5AA3B1BE4D03D1D36A98D1AFBD4607C3EBB244D9 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TKey_t7518B94CFEBCBDFD89737409C77350621A54669D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_tCF9369A523FE68BDDE93FD47541225C476900953 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_InternalGetHashCode_m8BA5731C950E4C5F090FFB985B505389AE540D49 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_Resize_mC4A2772C5D27527B873AF6670CB5A6F2B4E057BE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Grouping_tE74A3126B3267FC0587D6D5E2EF780D29E9DC649 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Grouping__ctor_mA40B18DDB0B49A2ED79B524B505E9DB8998BF3FA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElementU5BU5D_t93028857AD2A56FDA6CD6DC458BFC620AAD8391E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t2C868C873DF7EA4359385DAF53CA7ACB96CB956D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tBF322ED7F64E0A111FA43366F150AAFE05A86157 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m36C8A424F3E14B2A8980522FE7F7172B5C6C728B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m82A6879D5450E7E851761E8D1FD962AEA657B40D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Array_Resize_TisTElement_t02A0F65F8184390B8E69997904D5AE44C19EBAA0_mF5EC1E0159713C021C2EEC50106327242688BCAC },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__7_t6A6AE7D01D29BDC1764289562767205A6F06561E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__7__ctor_mB54EDFF4FE9E97CBFC8C5B16C41EF764B290593B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Grouping_GetEnumerator_m13259DF1A2CA7716091F4A36EF9DCA6F6C8BF003 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Array_IndexOf_TisTElement_t02A0F65F8184390B8E69997904D5AE44C19EBAA0_m0E27A4B8C4E4C0E5CEF80A9BD51D0DC319649D6A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElement_tDE19722F134B9431747709B2914E337ADEB691C1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_m0ACEA98E0F309527422B734EC2D6F838F42E855A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_tE98C8758DC67BAC10BC58A6EAF2BC7702037261D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_SlotU5BU5D_t59C5931DEEAB28C10C90F90194F7BA255205FF0C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_Find_m960A4C3A4D4AA1B1E999EF848750BBE1A7D926F7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_InternalGetHashCode_m9B51B4A88084A8FDB38514325ECF1F61E2D272DA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t3CB967F967F4706563FB9E277A60032CD22D6832 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Set_1_Resize_m93FE9D1D00D5F0FC34818A15B4F62F95E55F075A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElement_t675859134FC8712282763A8D72CA128B8B43DD5D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_Create_TisTSource_t95933129C248BBBE3B532BA8CFB5350A22311796_m141D6282A56A115DE5D096179676481A9802E0E2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_t18A588C0C5E56D50B17CDE7ED4798AECE00E5A2E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Lookup_2_GetEnumerator_mA3662CF25C60F4598B6A586071A5A2B11A39BB64 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_GroupedEnumerable_3_GetEnumerator_m7308C41BCA816D940D195E8651272EC1C27A4CEF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t7C426FF7559846CA5118EB7658EEC1A091C8D99B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElementU5BU5D_t7794BEA974AC676D685D83352F37C7ADBF84BD60 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tD73EF5A715E0D735FB8796582DF7DAAE59248A28 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t721019D94B9F297B40CA782A203E918DCEF86D3E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_m0E4BF9A3FBB72E07033EA16B23935DD2A753BE7E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_t57E7B5874DDB8ED0BBCF9EA1E8EE5E482DB475BF },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1__ctor_m59687428EFF3A060C7E4A58B33D8CCB1866245DB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_AddIfNotPresent_mD32BD7F09DDC0123D28A33C4E91499817AEBDE5A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_InternalGetHashCode_mDF2E29D60C603DBF5BE68A3DAD153D124902A38D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_CopyTo_m2CEA36CE0A9828B0D2817BABB0778E9B7CC2D23B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_tFA70BB9403614A86785198F7670E8A79579D96AA_mE4CF1DE156A56C76F3D17E5D356B4592BF76045B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_t3B01BF569E0DDC9775F15A857D58FB5891FF9794 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator__ctor_mF6352008F027267A6D46E84C5EE5A593C2008B31 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IComparer_1_tAC617197608B3A3B8581D014191E97687ACBDC73 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_CopyTo_m3C429D78A2E5EB4297C0E1913DB8D3E719AF41E9 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_SetCapacity_mA30C348AE8DA2CB53D157195B16A8EF0AF88F810 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_Initialize_m388A18FBF12F617107200961B7E4736E2B032820 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_IncreaseCapacity_mA3287035E39B231BF0B2B4CDEFA182530F54F0DB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_tFA70BB9403614A86785198F7670E8A79579D96AA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_m5AF8DAD51CCB7D8472437E484EE9ECA33FACD0C8 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_t915F5DD3D2E812A343EBC3FB68983028184D4B2A },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	184,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	48,
	s_rgctxIndices,
	238,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
