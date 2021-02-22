#ifndef _POD_ZIP_H
#define _POD_ZIP_H

#include <zip.h>


typedef struct pod_zip_entry_pod4_s
{
	zip_source_t *src;
	zip_t *za;
	zip_error_t error;
	pod_entry_pod4_t* entry;
	pod_char_t* name;
} pod_zip_entry_pod4_t;

typedef struct pod_zip_entry_pod5_s
{
	zip_source_t *src;
	zip_t *za;
	zip_error_t error;
	pod_entry_pod5_t* entry;
	pod_char_t* name;
} pod_zip_entry_pod5_t;

typedef struct pod_zip_entry_pod6_s
{
	zip_source_t *src;
	zip_t *za;
	zip_error_t error;
	pod_entry_pod6_t* entry;
	pod_char_t* name;
} pod_zip_entry_pod6_t;


pod_ssize_t pod_zip_compress(pod_byte_t** dst, pod_byte_t* src, pod_size_t decompressed);

pod_ssize_t pod_zip_decompress(pod_byte_t** dst, pod_byte_t* src, pod_size_t compressed);

pod_zip_entry_pod4_t* pod_zip_entries_pod4_create(pod_file_pod4_t* pod4);
pod_zip_entry_pod5_t* pod_zip_entries_pod5_create(pod_file_pod5_t* pod5);
pod_zip_entry_pod6_t* pod_zip_entries_pod6_create(pod_file_pod6_t* pod6);

pod_zip_entry_pod4_t* pod_zip_entries_pod4_update(pod_file_pod4_t* pod4);
pod_zip_entry_pod5_t* pod_zip_entries_pod5_update(pod_file_pod5_t* pod5);
pod_zip_entry_pod6_t* pod_zip_entries_pod6_update(pod_file_pod6_t* pod6);

pod_zip_entry_pod4_t* pod_zip_entries_pod4_destroy(pod_file_pod4_t* pod4);
pod_zip_entry_pod5_t* pod_zip_entries_pod5_destroy(pod_file_pod5_t* pod5);
pod_zip_entry_pod6_t* pod_zip_entries_pod6_destroy(pod_file_pod6_t* pod6);

#endif
