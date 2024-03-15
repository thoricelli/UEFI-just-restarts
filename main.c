#include <efi.h>
#include <efilib.h>
 
EFI_STATUS
EFIAPI
efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable)
{
  InitializeLib(ImageHandle, SystemTable);
  SystemTable->RuntimeServices->ResetSystem(EfiResetWarm, 0, 0, NULL);
  return EFI_SUCCESS;
}