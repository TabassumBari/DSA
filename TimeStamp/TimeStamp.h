#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
template <class ItemType>
class SortedType
{
 struct NodeType
 {
 ItemType info;
 NodeType* next;
 };
 public:
 SortedType();
 ~SortedType();
 bool IsFull();
 int LengthIs();
 void MakeEmpty();
 void RetrieveItem(ItemType&,
bool&);
 void InsertItem(ItemType);
 void DeleteItem(ItemType);
 void ResetList();
 void GetNextItem(ItemType&);
 private:
 NodeType* listData;
 int length;
 NodeType* currentPos;
};



#endif // TIMESTAMP_H_INCLUDED
