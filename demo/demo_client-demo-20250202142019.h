#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

extern "C" {

int verify_license_file(const char *file,
                        int validate_restriction,
                        char *buf,
                        unsigned int buf_size);

int get_root_key_name(char *buf, unsigned int buf_size);

int get_client_key_name(char *buf, unsigned int buf_size);

int get_key_create_time(char *buf, unsigned int buf_size);

int read_hardware_id(char *buf, unsigned int buf_size);

}  // extern "C"
