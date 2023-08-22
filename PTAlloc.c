#include "test.h"

/*
 * PTAlloc
 */

u64 alloc_s2pt_pgd(u32 vmid)
{
  u64* ptr = (u64*) malloc(PAGE_SIZE * sizeof(u64));
  if (ptr!= NULL){
    return check64(ptr);
  } else {
    printf("cannot malloc new PT");
  }
}


u64 alloc_s2pt_pud(u32 vmid)
{
  u64* ptr = (u64*) malloc(PAGE_SIZE * sizeof(u64));
  if (ptr!= NULL){
    return check64(ptr);
  } else {
    printf("cannot malloc new PT");
  }

}

u64 alloc_s2pt_pmd(u32 vmid)
{
  u64* ptr = (u64*) malloc(PAGE_SIZE * sizeof(u64));
  if (ptr!= NULL){
    return check64(ptr);
  } else {
    printf("cannot malloc new PT");
  }
}


int main(void)
{
  u32 vmid = 6;
  printf("new PGD addr is %llu \n", alloc_s2pt_pgd(vmid));
  printf("new PUD addr is %llu \n", alloc_s2pt_pud(vmid));
  printf("new PMD addr is %llu \n", alloc_s2pt_pmd(vmid));
  return 0;
  
}