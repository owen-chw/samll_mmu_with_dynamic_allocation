#include "test.h"

/*
 * PTAlloc
 */

u64* alloc_s2pt_pgd(u32 vmid)
//@ requires true;
//@ ensures true;
{
  u64* ptr = (u64*) malloc(PAGE_SIZE * sizeof(u64));
  if (ptr!= NULL){
    return check64(ptr);
    //@ leak malloc_block_ullongs(_, _) &*& ullongs_(_, _,_);
  } else {
    printf("cannot malloc new PT");
    return 0;
  }
  //@ leak malloc_block_ullongs(array, _) &*& ullongs_(array, _,values);
}


u64* alloc_s2pt_pud(u32 vmid)
//@ requires true;
//@ ensures true;
{
  u64* ptr = (u64*) malloc(PAGE_SIZE * sizeof(u64));
  if (ptr!= NULL){
    return check64(ptr);
    //@ leak malloc_block_ullongs(_, _) &*& ullongs_(_, _,_);
  } else {
    printf("cannot malloc new PT");
    return 0;
  }
//@ leak malloc_block_ullongs(_, _) &*& ullongs_(_, _,_);
}

u64* alloc_s2pt_pmd(u32 vmid)
//@ requires true;
//@ ensures true;
{
  u64* ptr = (u64*) malloc(PAGE_SIZE * sizeof(u64));
  if (ptr!= NULL){
    return check64(ptr);
    //@ leak malloc_block_ullongs(_, _) &*& ullongs_(_, _,_);
  } else {
    printf("cannot malloc new PT");
    return 0;
  }
  //@ leak malloc_block_ullongs(_, _) &*& ullongs_(_, _,_);
}


int main(void)
//@ requires true;
//@ ensures true;
{
  u32 vmid = 6;
  alloc_s2pt_pgd(vmid);
  //printf("new PGD addr is %llu \n", alloc_s2pt_pgd(vmid));
  //printf("new PUD addr is %llu \n", alloc_s2pt_pud(vmid));
  //printf("new PMD addr is %llu \n", alloc_s2pt_pmd(vmid));
  return 0;
  
}