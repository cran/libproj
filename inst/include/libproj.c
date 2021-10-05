// generated automatically by data-raw/update-libproj-api.R - do not edit by hand!
#include "libproj.h"
#include <Rinternals.h>
#include <R_ext/Rdynload.h>

int (*libproj_version_int)() = NULL;
PJ_CONTEXT* (*proj_context_create)(void) = NULL;
PJ_CONTEXT* (*proj_context_destroy)(PJ_CONTEXT*) = NULL;
PJ_CONTEXT* (*proj_context_clone)(PJ_CONTEXT*) = NULL;
void (*proj_context_set_file_finder)(PJ_CONTEXT*, proj_file_finder, void*) = NULL;
void (*proj_context_set_search_paths)(PJ_CONTEXT*, int, const char* const*) = NULL;
void (*proj_context_set_ca_bundle_path)(PJ_CONTEXT*, const char*) = NULL;
void (*proj_context_use_proj4_init_rules)(PJ_CONTEXT*, int) = NULL;
int (*proj_context_get_use_proj4_init_rules)(PJ_CONTEXT*, int) = NULL;
int (*proj_context_set_fileapi)( PJ_CONTEXT*, const PROJ_FILE_API*, void*) = NULL;
void (*proj_context_set_sqlite3_vfs_name)(PJ_CONTEXT*, const char*) = NULL;
int (*proj_context_set_network_callbacks)( PJ_CONTEXT*, proj_network_open_cbk_type, proj_network_close_cbk_type, proj_network_get_header_value_cbk_type, proj_network_read_range_type, void*) = NULL;
int (*proj_context_set_enable_network)(PJ_CONTEXT*, int) = NULL;
int (*proj_context_is_network_enabled)(PJ_CONTEXT*) = NULL;
void (*proj_context_set_url_endpoint)(PJ_CONTEXT*, const char*) = NULL;
const char* (*proj_context_get_url_endpoint)(PJ_CONTEXT*) = NULL;
const char* (*proj_context_get_user_writable_directory)(PJ_CONTEXT*, int) = NULL;
void (*proj_grid_cache_set_enable)(PJ_CONTEXT*, int) = NULL;
void (*proj_grid_cache_set_filename)(PJ_CONTEXT*, const char*) = NULL;
void (*proj_grid_cache_set_max_size)(PJ_CONTEXT*, int) = NULL;
void (*proj_grid_cache_set_ttl)(PJ_CONTEXT*, int) = NULL;
void (*proj_grid_cache_clear)(PJ_CONTEXT*) = NULL;
int (*proj_is_download_needed)(PJ_CONTEXT*, const char*, int) = NULL;
int (*proj_download_file)(PJ_CONTEXT*, const char*, int, int*) = NULL;
PJ* (*proj_create)(PJ_CONTEXT*, const char*) = NULL;
PJ* (*proj_create_argv)(PJ_CONTEXT*, int, char**) = NULL;
PJ* (*proj_create_crs_to_crs)(PJ_CONTEXT*, const char*, const char*, PJ_AREA*) = NULL;
PJ* (*proj_create_crs_to_crs_from_pj)(PJ_CONTEXT*, const PJ*, const PJ*, PJ_AREA*, const char* const*) = NULL;
PJ* (*proj_normalize_for_visualization)(PJ_CONTEXT*, const PJ*) = NULL;
void (*proj_assign_context)(PJ*, PJ_CONTEXT*) = NULL;
PJ* (*proj_destroy)(PJ*) = NULL;
PJ_AREA* (*proj_area_create)(void) = NULL;
void (*proj_area_set_bbox)(PJ_AREA*, double, double, double, double) = NULL;
void (*proj_area_destroy)(PJ_AREA*) = NULL;
int (*proj_angular_input)(PJ*, enum PJ_DIRECTION) = NULL;
int (*proj_angular_output)(PJ*, enum PJ_DIRECTION) = NULL;
int (*proj_degree_input)(PJ*, enum PJ_DIRECTION) = NULL;
int (*proj_degree_output)(PJ*, enum PJ_DIRECTION) = NULL;
PJ_COORD (*proj_trans)(PJ*, PJ_DIRECTION, PJ_COORD) = NULL;
int (*proj_trans_array)(PJ*, PJ_DIRECTION, size_t, PJ_COORD*) = NULL;
size_t (*proj_trans_generic)( PJ*, PJ_DIRECTION, double*, size_t, size_t, double*, size_t, size_t, double*, size_t, size_t, double*, size_t, size_t nt ) = NULL;
PJ_COORD (*proj_coord)(double, double, double, double) = NULL;
double (*proj_roundtrip)(PJ*, PJ_DIRECTION, int, PJ_COORD*) = NULL;
double (*proj_lp_dist)(const PJ*, PJ_COORD, PJ_COORD) = NULL;
double (*proj_lpz_dist)(const PJ*, PJ_COORD, PJ_COORD) = NULL;
double (*proj_xy_dist)(PJ_COORD, PJ_COORD) = NULL;
double (*proj_xyz_dist)(PJ_COORD, PJ_COORD) = NULL;
PJ_COORD (*proj_geod)(const PJ*, PJ_COORD, PJ_COORD) = NULL;
int (*proj_context_errno)(PJ_CONTEXT*) = NULL;
int (*proj_errno)(const PJ*) = NULL;
int (*proj_errno_set)(const PJ*, int) = NULL;
int (*proj_errno_reset)(const PJ*) = NULL;
int (*proj_errno_restore)(const PJ*, int) = NULL;
const char* (*proj_errno_string)(int) = NULL;
const char* (*proj_context_errno_string)(PJ_CONTEXT*, int) = NULL;
PJ_LOG_LEVEL (*proj_log_level)(PJ_CONTEXT*, PJ_LOG_LEVEL) = NULL;
void (*proj_log_func)(PJ_CONTEXT*, void*, PJ_LOG_FUNCTION) = NULL;
PJ_FACTORS (*proj_factors)(PJ*, PJ_COORD) = NULL;
PJ_INFO (*proj_info)(void) = NULL;
PJ_PROJ_INFO (*proj_pj_info)(PJ*) = NULL;
PJ_GRID_INFO (*proj_grid_info)(const char*) = NULL;
PJ_INIT_INFO (*proj_init_info)(const char*) = NULL;
const PJ_OPERATIONS* (*proj_list_operations)(void) = NULL;
const PJ_ELLPS* (*proj_list_ellps)(void) = NULL;
const PJ_PRIME_MERIDIANS* (*proj_list_prime_meridians)(void) = NULL;
double (*proj_torad)(double) = NULL;
double (*proj_todeg)(double) = NULL;
double (*proj_dmstor)(const char*, char**) = NULL;
char* (*proj_rtodms)(char*, double, int, int) = NULL;
void (*proj_cleanup)(void) = NULL;
void (*proj_string_list_destroy)(PROJ_STRING_LIST) = NULL;
void (*proj_context_set_autoclose_database)(PJ_CONTEXT*, int) = NULL;
int (*proj_context_set_database_path)(PJ_CONTEXT*, const char*, const char *const*, const char* const*) = NULL;
const char* (*proj_context_get_database_path)(PJ_CONTEXT*) = NULL;
const char* (*proj_context_get_database_metadata)(PJ_CONTEXT*, const char*) = NULL;
PROJ_STRING_LIST (*proj_context_get_database_structure)( PJ_CONTEXT*, const char* const*) = NULL;
PJ_GUESSED_WKT_DIALECT (*proj_context_guess_wkt_dialect)(PJ_CONTEXT*, const char*) = NULL;
PJ* (*proj_create_from_wkt)(PJ_CONTEXT*, const char*, const char* const*, PROJ_STRING_LIST*, PROJ_STRING_LIST*) = NULL;
PJ* (*proj_create_from_database)(PJ_CONTEXT*, const char*, const char*, PJ_CATEGORY, int, const char* const*) = NULL;
int (*proj_uom_get_info_from_database)(PJ_CONTEXT*, const char*, const char*, const char**, double*, const char**) = NULL;
int (*proj_grid_get_info_from_database)(PJ_CONTEXT*, const char*, const char**, const char**, const char**, int*, int*, int*) = NULL;
PJ* (*proj_clone)(PJ_CONTEXT*, const PJ*) = NULL;
PJ_OBJ_LIST* (*proj_create_from_name)(PJ_CONTEXT*, const char*, const char*, const PJ_TYPE*, size_t, int, size_t, const char* const*) = NULL;
PJ_TYPE (*proj_get_type)(const PJ*) = NULL;
int (*proj_is_deprecated)(const PJ*) = NULL;
PJ_OBJ_LIST* (*proj_get_non_deprecated)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_is_equivalent_to)(const PJ*, const PJ*, PJ_COMPARISON_CRITERION) = NULL;
int (*proj_is_equivalent_to_with_ctx)(PJ_CONTEXT*, const PJ*, const PJ*, PJ_COMPARISON_CRITERION) = NULL;
int (*proj_is_crs)(const PJ*) = NULL;
const char* (*proj_get_name)(const PJ*) = NULL;
const char* (*proj_get_id_auth_name)(const PJ*, int) = NULL;
const char* (*proj_get_id_code)(const PJ*, int) = NULL;
const char* (*proj_get_remarks)(const PJ*) = NULL;
const char* (*proj_get_scope)(const PJ*) = NULL;
int (*proj_get_area_of_use)(PJ_CONTEXT*, const PJ*, double*, double*, double*, double*, const char**) = NULL;
const char* (*proj_as_wkt)(PJ_CONTEXT*, const PJ*, PJ_WKT_TYPE, const char* const*) = NULL;
const char* (*proj_as_proj_string)(PJ_CONTEXT*, const PJ*, PJ_PROJ_STRING_TYPE, const char* const*) = NULL;
const char* (*proj_as_projjson)(PJ_CONTEXT*, const PJ*, const char* const*) = NULL;
PJ* (*proj_get_source_crs)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_get_target_crs)(PJ_CONTEXT*, const PJ*) = NULL;
PJ_OBJ_LIST* (*proj_identify)(PJ_CONTEXT*, const PJ*, const char*, const char* const*, int**) = NULL;
PROJ_STRING_LIST (*proj_get_geoid_models_from_database)( PJ_CONTEXT*, const char*, const char*, const char *const*) = NULL;
void (*proj_int_list_destroy)(int*) = NULL;
PROJ_STRING_LIST (*proj_get_authorities_from_database)(PJ_CONTEXT*) = NULL;
PROJ_STRING_LIST (*proj_get_codes_from_database)(PJ_CONTEXT*, const char*, PJ_TYPE, int) = NULL;
PROJ_CELESTIAL_BODY_INFO* (*proj_get_celestial_body_list_from_database)( PJ_CONTEXT*, const char*, int*) = NULL;
void (*proj_celestial_body_list_destroy)(PROJ_CELESTIAL_BODY_INFO**) = NULL;
PROJ_CRS_LIST_PARAMETERS* (*proj_get_crs_list_parameters_create)(void) = NULL;
void (*proj_get_crs_list_parameters_destroy)( PROJ_CRS_LIST_PARAMETERS*) = NULL;
PROJ_CRS_INFO* (*proj_get_crs_info_list_from_database)( PJ_CONTEXT*, const char*, const PROJ_CRS_LIST_PARAMETERS*, int*) = NULL;
void (*proj_crs_info_list_destroy)(PROJ_CRS_INFO**) = NULL;
PROJ_UNIT_INFO* (*proj_get_units_from_database)( PJ_CONTEXT*, const char*, const char*, int, int*) = NULL;
void (*proj_unit_list_destroy)(PROJ_UNIT_INFO**) = NULL;
PJ_INSERT_SESSION* (*proj_insert_object_session_create)(PJ_CONTEXT*) = NULL;
void (*proj_insert_object_session_destroy)(PJ_CONTEXT*, PJ_INSERT_SESSION*) = NULL;
PROJ_STRING_LIST (*proj_get_insert_statements)(PJ_CONTEXT*, PJ_INSERT_SESSION*, const PJ*, const char*, const char*, int, const char *const*, const char *const*) = NULL;
char* (*proj_suggests_code_for)(PJ_CONTEXT*, const PJ*, const char*, int, const char *const*) = NULL;
void (*proj_string_destroy)(char*) = NULL;
PJ_OPERATION_FACTORY_CONTEXT* (*proj_create_operation_factory_context)( PJ_CONTEXT*, const char*) = NULL;
void (*proj_operation_factory_context_destroy)( PJ_OPERATION_FACTORY_CONTEXT*) = NULL;
void (*proj_operation_factory_context_set_desired_accuracy)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, double) = NULL;
void (*proj_operation_factory_context_set_area_of_interest)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, double, double, double, double) = NULL;
void (*proj_operation_factory_context_set_crs_extent_use)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, PROJ_CRS_EXTENT_USE) = NULL;
void (*proj_operation_factory_context_set_spatial_criterion)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, PROJ_SPATIAL_CRITERION) = NULL;
void (*proj_operation_factory_context_set_grid_availability_use)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, PROJ_GRID_AVAILABILITY_USE) = NULL;
void (*proj_operation_factory_context_set_use_proj_alternative_grid_names)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, int) = NULL;
void (*proj_operation_factory_context_set_allow_use_intermediate_crs)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, PROJ_INTERMEDIATE_CRS_USE) = NULL;
void (*proj_operation_factory_context_set_allowed_intermediate_crs)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, const char* const*) = NULL;
void (*proj_operation_factory_context_set_discard_superseded)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, int) = NULL;
void (*proj_operation_factory_context_set_allow_ballpark_transformations)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, int) = NULL;
PJ_OBJ_LIST* (*proj_create_operations)( PJ_CONTEXT*, const PJ*, const PJ*, const PJ_OPERATION_FACTORY_CONTEXT*) = NULL;
int (*proj_list_get_count)(const PJ_OBJ_LIST*) = NULL;
PJ* (*proj_list_get)(PJ_CONTEXT*, const PJ_OBJ_LIST*, int) = NULL;
void (*proj_list_destroy)(PJ_OBJ_LIST*) = NULL;
int (*proj_get_suggested_operation)(PJ_CONTEXT*, PJ_OBJ_LIST*, PJ_DIRECTION, PJ_COORD) = NULL;
int (*proj_crs_is_derived)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_crs_get_geodetic_crs)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_crs_get_horizontal_datum)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_crs_get_sub_crs)(PJ_CONTEXT*, const PJ*, int) = NULL;
PJ* (*proj_crs_get_datum)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_crs_get_datum_ensemble)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_crs_get_datum_forced)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_datum_ensemble_get_member_count)(PJ_CONTEXT*, const PJ*) = NULL;
double (*proj_datum_ensemble_get_accuracy)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_datum_ensemble_get_member)(PJ_CONTEXT*, const PJ*, int) = NULL;
double (*proj_dynamic_datum_get_frame_reference_epoch)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_crs_get_coordinate_system)(PJ_CONTEXT*, const PJ*) = NULL;
PJ_COORDINATE_SYSTEM_TYPE (*proj_cs_get_type)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_cs_get_axis_count)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_cs_get_axis_info)(PJ_CONTEXT*, const PJ*, int, const char**, const char**, const char**, double*, const char**, const char**, const char**) = NULL;
PJ* (*proj_get_ellipsoid)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_ellipsoid_get_parameters)(PJ_CONTEXT*, const PJ*, double*, double*, int*, double*) = NULL;
const char* (*proj_get_celestial_body_name)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_get_prime_meridian)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_prime_meridian_get_parameters)(PJ_CONTEXT*, const PJ*, double*, double*, const char**) = NULL;
PJ* (*proj_crs_get_coordoperation)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_coordoperation_get_method_info)(PJ_CONTEXT*, const PJ*, const char**, const char**, const char**) = NULL;
int (*proj_coordoperation_is_instantiable)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_coordoperation_has_ballpark_transformation)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_coordoperation_get_param_count)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_coordoperation_get_param_index)(PJ_CONTEXT*, const PJ*, const char*) = NULL;
int (*proj_coordoperation_get_param)(PJ_CONTEXT*, const PJ*, int, const char**, const char**, const char**, double*, const char**, double*, const char**, const char**, const char**, const char**) = NULL;
int (*proj_coordoperation_get_grid_used_count)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_coordoperation_get_grid_used)(PJ_CONTEXT*, const PJ*, int, const char**, const char**, const char**, const char**, int*, int*, int*) = NULL;
double (*proj_coordoperation_get_accuracy)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_coordoperation_get_towgs84_values)(PJ_CONTEXT*, const PJ*, double*, int, int) = NULL;
PJ* (*proj_coordoperation_create_inverse)(PJ_CONTEXT*, const PJ*) = NULL;
int (*proj_concatoperation_get_step_count)(PJ_CONTEXT*, const PJ*) = NULL;
PJ* (*proj_concatoperation_get_step)(PJ_CONTEXT*, const PJ*, int) = NULL;

void libproj_init_api() {
  libproj_version_int = (int (*)()) R_GetCCallable("libproj", "libproj_version_int");
  proj_context_create = (PJ_CONTEXT* (*)(void)) R_GetCCallable("libproj", "proj_context_create");
  proj_context_destroy = (PJ_CONTEXT* (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_context_destroy");
  proj_context_clone = (PJ_CONTEXT* (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_context_clone");
  proj_context_set_file_finder = (void (*)(PJ_CONTEXT*, proj_file_finder, void*)) R_GetCCallable("libproj", "proj_context_set_file_finder");
  proj_context_set_search_paths = (void (*)(PJ_CONTEXT*, int, const char* const*)) R_GetCCallable("libproj", "proj_context_set_search_paths");
  proj_context_set_ca_bundle_path = (void (*)(PJ_CONTEXT*, const char*)) R_GetCCallable("libproj", "proj_context_set_ca_bundle_path");
  proj_context_use_proj4_init_rules = (void (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_context_use_proj4_init_rules");
  proj_context_get_use_proj4_init_rules = (int (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_context_get_use_proj4_init_rules");
  proj_context_set_fileapi = (int (*)( PJ_CONTEXT*, const PROJ_FILE_API*, void*)) R_GetCCallable("libproj", "proj_context_set_fileapi");
  proj_context_set_sqlite3_vfs_name = (void (*)(PJ_CONTEXT*, const char*)) R_GetCCallable("libproj", "proj_context_set_sqlite3_vfs_name");
  proj_context_set_network_callbacks = (int (*)( PJ_CONTEXT*, proj_network_open_cbk_type, proj_network_close_cbk_type, proj_network_get_header_value_cbk_type, proj_network_read_range_type, void*)) R_GetCCallable("libproj", "proj_context_set_network_callbacks");
  proj_context_set_enable_network = (int (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_context_set_enable_network");
  proj_context_is_network_enabled = (int (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_context_is_network_enabled");
  proj_context_set_url_endpoint = (void (*)(PJ_CONTEXT*, const char*)) R_GetCCallable("libproj", "proj_context_set_url_endpoint");
  proj_context_get_url_endpoint = (const char* (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_context_get_url_endpoint");
  proj_context_get_user_writable_directory = (const char* (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_context_get_user_writable_directory");
  proj_grid_cache_set_enable = (void (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_grid_cache_set_enable");
  proj_grid_cache_set_filename = (void (*)(PJ_CONTEXT*, const char*)) R_GetCCallable("libproj", "proj_grid_cache_set_filename");
  proj_grid_cache_set_max_size = (void (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_grid_cache_set_max_size");
  proj_grid_cache_set_ttl = (void (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_grid_cache_set_ttl");
  proj_grid_cache_clear = (void (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_grid_cache_clear");
  proj_is_download_needed = (int (*)(PJ_CONTEXT*, const char*, int)) R_GetCCallable("libproj", "proj_is_download_needed");
  proj_download_file = (int (*)(PJ_CONTEXT*, const char*, int, int*)) R_GetCCallable("libproj", "proj_download_file");
  proj_create = (PJ* (*)(PJ_CONTEXT*, const char*)) R_GetCCallable("libproj", "proj_create");
  proj_create_argv = (PJ* (*)(PJ_CONTEXT*, int, char**)) R_GetCCallable("libproj", "proj_create_argv");
  proj_create_crs_to_crs = (PJ* (*)(PJ_CONTEXT*, const char*, const char*, PJ_AREA*)) R_GetCCallable("libproj", "proj_create_crs_to_crs");
  proj_create_crs_to_crs_from_pj = (PJ* (*)(PJ_CONTEXT*, const PJ*, const PJ*, PJ_AREA*, const char* const*)) R_GetCCallable("libproj", "proj_create_crs_to_crs_from_pj");
  proj_normalize_for_visualization = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_normalize_for_visualization");
  proj_assign_context = (void (*)(PJ*, PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_assign_context");
  proj_destroy = (PJ* (*)(PJ*)) R_GetCCallable("libproj", "proj_destroy");
  proj_area_create = (PJ_AREA* (*)(void)) R_GetCCallable("libproj", "proj_area_create");
  proj_area_set_bbox = (void (*)(PJ_AREA*, double, double, double, double)) R_GetCCallable("libproj", "proj_area_set_bbox");
  proj_area_destroy = (void (*)(PJ_AREA*)) R_GetCCallable("libproj", "proj_area_destroy");
  proj_angular_input = (int (*)(PJ*, enum PJ_DIRECTION)) R_GetCCallable("libproj", "proj_angular_input");
  proj_angular_output = (int (*)(PJ*, enum PJ_DIRECTION)) R_GetCCallable("libproj", "proj_angular_output");
  proj_degree_input = (int (*)(PJ*, enum PJ_DIRECTION)) R_GetCCallable("libproj", "proj_degree_input");
  proj_degree_output = (int (*)(PJ*, enum PJ_DIRECTION)) R_GetCCallable("libproj", "proj_degree_output");
  proj_trans = (PJ_COORD (*)(PJ*, PJ_DIRECTION, PJ_COORD)) R_GetCCallable("libproj", "proj_trans");
  proj_trans_array = (int (*)(PJ*, PJ_DIRECTION, size_t, PJ_COORD*)) R_GetCCallable("libproj", "proj_trans_array");
  proj_trans_generic = (size_t (*)( PJ*, PJ_DIRECTION, double*, size_t, size_t, double*, size_t, size_t, double*, size_t, size_t, double*, size_t, size_t nt )) R_GetCCallable("libproj", "proj_trans_generic");
  proj_coord = (PJ_COORD (*)(double, double, double, double)) R_GetCCallable("libproj", "proj_coord");
  proj_roundtrip = (double (*)(PJ*, PJ_DIRECTION, int, PJ_COORD*)) R_GetCCallable("libproj", "proj_roundtrip");
  proj_lp_dist = (double (*)(const PJ*, PJ_COORD, PJ_COORD)) R_GetCCallable("libproj", "proj_lp_dist");
  proj_lpz_dist = (double (*)(const PJ*, PJ_COORD, PJ_COORD)) R_GetCCallable("libproj", "proj_lpz_dist");
  proj_xy_dist = (double (*)(PJ_COORD, PJ_COORD)) R_GetCCallable("libproj", "proj_xy_dist");
  proj_xyz_dist = (double (*)(PJ_COORD, PJ_COORD)) R_GetCCallable("libproj", "proj_xyz_dist");
  proj_geod = (PJ_COORD (*)(const PJ*, PJ_COORD, PJ_COORD)) R_GetCCallable("libproj", "proj_geod");
  proj_context_errno = (int (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_context_errno");
  proj_errno = (int (*)(const PJ*)) R_GetCCallable("libproj", "proj_errno");
  proj_errno_set = (int (*)(const PJ*, int)) R_GetCCallable("libproj", "proj_errno_set");
  proj_errno_reset = (int (*)(const PJ*)) R_GetCCallable("libproj", "proj_errno_reset");
  proj_errno_restore = (int (*)(const PJ*, int)) R_GetCCallable("libproj", "proj_errno_restore");
  proj_errno_string = (const char* (*)(int)) R_GetCCallable("libproj", "proj_errno_string");
  proj_context_errno_string = (const char* (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_context_errno_string");
  proj_log_level = (PJ_LOG_LEVEL (*)(PJ_CONTEXT*, PJ_LOG_LEVEL)) R_GetCCallable("libproj", "proj_log_level");
  proj_log_func = (void (*)(PJ_CONTEXT*, void*, PJ_LOG_FUNCTION)) R_GetCCallable("libproj", "proj_log_func");
  proj_factors = (PJ_FACTORS (*)(PJ*, PJ_COORD)) R_GetCCallable("libproj", "proj_factors");
  proj_info = (PJ_INFO (*)(void)) R_GetCCallable("libproj", "proj_info");
  proj_pj_info = (PJ_PROJ_INFO (*)(PJ*)) R_GetCCallable("libproj", "proj_pj_info");
  proj_grid_info = (PJ_GRID_INFO (*)(const char*)) R_GetCCallable("libproj", "proj_grid_info");
  proj_init_info = (PJ_INIT_INFO (*)(const char*)) R_GetCCallable("libproj", "proj_init_info");
  proj_list_operations = (const PJ_OPERATIONS* (*)(void)) R_GetCCallable("libproj", "proj_list_operations");
  proj_list_ellps = (const PJ_ELLPS* (*)(void)) R_GetCCallable("libproj", "proj_list_ellps");
  proj_list_prime_meridians = (const PJ_PRIME_MERIDIANS* (*)(void)) R_GetCCallable("libproj", "proj_list_prime_meridians");
  proj_torad = (double (*)(double)) R_GetCCallable("libproj", "proj_torad");
  proj_todeg = (double (*)(double)) R_GetCCallable("libproj", "proj_todeg");
  proj_dmstor = (double (*)(const char*, char**)) R_GetCCallable("libproj", "proj_dmstor");
  proj_rtodms = (char* (*)(char*, double, int, int)) R_GetCCallable("libproj", "proj_rtodms");
  proj_cleanup = (void (*)(void)) R_GetCCallable("libproj", "proj_cleanup");
  proj_string_list_destroy = (void (*)(PROJ_STRING_LIST)) R_GetCCallable("libproj", "proj_string_list_destroy");
  proj_context_set_autoclose_database = (void (*)(PJ_CONTEXT*, int)) R_GetCCallable("libproj", "proj_context_set_autoclose_database");
  proj_context_set_database_path = (int (*)(PJ_CONTEXT*, const char*, const char *const*, const char* const*)) R_GetCCallable("libproj", "proj_context_set_database_path");
  proj_context_get_database_path = (const char* (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_context_get_database_path");
  proj_context_get_database_metadata = (const char* (*)(PJ_CONTEXT*, const char*)) R_GetCCallable("libproj", "proj_context_get_database_metadata");
  proj_context_get_database_structure = (PROJ_STRING_LIST (*)( PJ_CONTEXT*, const char* const*)) R_GetCCallable("libproj", "proj_context_get_database_structure");
  proj_context_guess_wkt_dialect = (PJ_GUESSED_WKT_DIALECT (*)(PJ_CONTEXT*, const char*)) R_GetCCallable("libproj", "proj_context_guess_wkt_dialect");
  proj_create_from_wkt = (PJ* (*)(PJ_CONTEXT*, const char*, const char* const*, PROJ_STRING_LIST*, PROJ_STRING_LIST*)) R_GetCCallable("libproj", "proj_create_from_wkt");
  proj_create_from_database = (PJ* (*)(PJ_CONTEXT*, const char*, const char*, PJ_CATEGORY, int, const char* const*)) R_GetCCallable("libproj", "proj_create_from_database");
  proj_uom_get_info_from_database = (int (*)(PJ_CONTEXT*, const char*, const char*, const char**, double*, const char**)) R_GetCCallable("libproj", "proj_uom_get_info_from_database");
  proj_grid_get_info_from_database = (int (*)(PJ_CONTEXT*, const char*, const char**, const char**, const char**, int*, int*, int*)) R_GetCCallable("libproj", "proj_grid_get_info_from_database");
  proj_clone = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_clone");
  proj_create_from_name = (PJ_OBJ_LIST* (*)(PJ_CONTEXT*, const char*, const char*, const PJ_TYPE*, size_t, int, size_t, const char* const*)) R_GetCCallable("libproj", "proj_create_from_name");
  proj_get_type = (PJ_TYPE (*)(const PJ*)) R_GetCCallable("libproj", "proj_get_type");
  proj_is_deprecated = (int (*)(const PJ*)) R_GetCCallable("libproj", "proj_is_deprecated");
  proj_get_non_deprecated = (PJ_OBJ_LIST* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_get_non_deprecated");
  proj_is_equivalent_to = (int (*)(const PJ*, const PJ*, PJ_COMPARISON_CRITERION)) R_GetCCallable("libproj", "proj_is_equivalent_to");
  proj_is_equivalent_to_with_ctx = (int (*)(PJ_CONTEXT*, const PJ*, const PJ*, PJ_COMPARISON_CRITERION)) R_GetCCallable("libproj", "proj_is_equivalent_to_with_ctx");
  proj_is_crs = (int (*)(const PJ*)) R_GetCCallable("libproj", "proj_is_crs");
  proj_get_name = (const char* (*)(const PJ*)) R_GetCCallable("libproj", "proj_get_name");
  proj_get_id_auth_name = (const char* (*)(const PJ*, int)) R_GetCCallable("libproj", "proj_get_id_auth_name");
  proj_get_id_code = (const char* (*)(const PJ*, int)) R_GetCCallable("libproj", "proj_get_id_code");
  proj_get_remarks = (const char* (*)(const PJ*)) R_GetCCallable("libproj", "proj_get_remarks");
  proj_get_scope = (const char* (*)(const PJ*)) R_GetCCallable("libproj", "proj_get_scope");
  proj_get_area_of_use = (int (*)(PJ_CONTEXT*, const PJ*, double*, double*, double*, double*, const char**)) R_GetCCallable("libproj", "proj_get_area_of_use");
  proj_as_wkt = (const char* (*)(PJ_CONTEXT*, const PJ*, PJ_WKT_TYPE, const char* const*)) R_GetCCallable("libproj", "proj_as_wkt");
  proj_as_proj_string = (const char* (*)(PJ_CONTEXT*, const PJ*, PJ_PROJ_STRING_TYPE, const char* const*)) R_GetCCallable("libproj", "proj_as_proj_string");
  proj_as_projjson = (const char* (*)(PJ_CONTEXT*, const PJ*, const char* const*)) R_GetCCallable("libproj", "proj_as_projjson");
  proj_get_source_crs = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_get_source_crs");
  proj_get_target_crs = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_get_target_crs");
  proj_identify = (PJ_OBJ_LIST* (*)(PJ_CONTEXT*, const PJ*, const char*, const char* const*, int**)) R_GetCCallable("libproj", "proj_identify");
  proj_get_geoid_models_from_database = (PROJ_STRING_LIST (*)( PJ_CONTEXT*, const char*, const char*, const char *const*)) R_GetCCallable("libproj", "proj_get_geoid_models_from_database");
  proj_int_list_destroy = (void (*)(int*)) R_GetCCallable("libproj", "proj_int_list_destroy");
  proj_get_authorities_from_database = (PROJ_STRING_LIST (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_get_authorities_from_database");
  proj_get_codes_from_database = (PROJ_STRING_LIST (*)(PJ_CONTEXT*, const char*, PJ_TYPE, int)) R_GetCCallable("libproj", "proj_get_codes_from_database");
  proj_get_celestial_body_list_from_database = (PROJ_CELESTIAL_BODY_INFO* (*)( PJ_CONTEXT*, const char*, int*)) R_GetCCallable("libproj", "proj_get_celestial_body_list_from_database");
  proj_celestial_body_list_destroy = (void (*)(PROJ_CELESTIAL_BODY_INFO**)) R_GetCCallable("libproj", "proj_celestial_body_list_destroy");
  proj_get_crs_list_parameters_create = (PROJ_CRS_LIST_PARAMETERS* (*)(void)) R_GetCCallable("libproj", "proj_get_crs_list_parameters_create");
  proj_get_crs_list_parameters_destroy = (void (*)( PROJ_CRS_LIST_PARAMETERS*)) R_GetCCallable("libproj", "proj_get_crs_list_parameters_destroy");
  proj_get_crs_info_list_from_database = (PROJ_CRS_INFO* (*)( PJ_CONTEXT*, const char*, const PROJ_CRS_LIST_PARAMETERS*, int*)) R_GetCCallable("libproj", "proj_get_crs_info_list_from_database");
  proj_crs_info_list_destroy = (void (*)(PROJ_CRS_INFO**)) R_GetCCallable("libproj", "proj_crs_info_list_destroy");
  proj_get_units_from_database = (PROJ_UNIT_INFO* (*)( PJ_CONTEXT*, const char*, const char*, int, int*)) R_GetCCallable("libproj", "proj_get_units_from_database");
  proj_unit_list_destroy = (void (*)(PROJ_UNIT_INFO**)) R_GetCCallable("libproj", "proj_unit_list_destroy");
  proj_insert_object_session_create = (PJ_INSERT_SESSION* (*)(PJ_CONTEXT*)) R_GetCCallable("libproj", "proj_insert_object_session_create");
  proj_insert_object_session_destroy = (void (*)(PJ_CONTEXT*, PJ_INSERT_SESSION*)) R_GetCCallable("libproj", "proj_insert_object_session_destroy");
  proj_get_insert_statements = (PROJ_STRING_LIST (*)(PJ_CONTEXT*, PJ_INSERT_SESSION*, const PJ*, const char*, const char*, int, const char *const*, const char *const*)) R_GetCCallable("libproj", "proj_get_insert_statements");
  proj_suggests_code_for = (char* (*)(PJ_CONTEXT*, const PJ*, const char*, int, const char *const*)) R_GetCCallable("libproj", "proj_suggests_code_for");
  proj_string_destroy = (void (*)(char*)) R_GetCCallable("libproj", "proj_string_destroy");
  proj_create_operation_factory_context = (PJ_OPERATION_FACTORY_CONTEXT* (*)( PJ_CONTEXT*, const char*)) R_GetCCallable("libproj", "proj_create_operation_factory_context");
  proj_operation_factory_context_destroy = (void (*)( PJ_OPERATION_FACTORY_CONTEXT*)) R_GetCCallable("libproj", "proj_operation_factory_context_destroy");
  proj_operation_factory_context_set_desired_accuracy = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, double)) R_GetCCallable("libproj", "proj_operation_factory_context_set_desired_accuracy");
  proj_operation_factory_context_set_area_of_interest = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, double, double, double, double)) R_GetCCallable("libproj", "proj_operation_factory_context_set_area_of_interest");
  proj_operation_factory_context_set_crs_extent_use = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, PROJ_CRS_EXTENT_USE)) R_GetCCallable("libproj", "proj_operation_factory_context_set_crs_extent_use");
  proj_operation_factory_context_set_spatial_criterion = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, PROJ_SPATIAL_CRITERION)) R_GetCCallable("libproj", "proj_operation_factory_context_set_spatial_criterion");
  proj_operation_factory_context_set_grid_availability_use = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, PROJ_GRID_AVAILABILITY_USE)) R_GetCCallable("libproj", "proj_operation_factory_context_set_grid_availability_use");
  proj_operation_factory_context_set_use_proj_alternative_grid_names = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, int)) R_GetCCallable("libproj", "proj_operation_factory_context_set_use_proj_alternative_grid_names");
  proj_operation_factory_context_set_allow_use_intermediate_crs = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, PROJ_INTERMEDIATE_CRS_USE)) R_GetCCallable("libproj", "proj_operation_factory_context_set_allow_use_intermediate_crs");
  proj_operation_factory_context_set_allowed_intermediate_crs = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, const char* const*)) R_GetCCallable("libproj", "proj_operation_factory_context_set_allowed_intermediate_crs");
  proj_operation_factory_context_set_discard_superseded = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, int)) R_GetCCallable("libproj", "proj_operation_factory_context_set_discard_superseded");
  proj_operation_factory_context_set_allow_ballpark_transformations = (void (*)( PJ_CONTEXT*, PJ_OPERATION_FACTORY_CONTEXT*, int)) R_GetCCallable("libproj", "proj_operation_factory_context_set_allow_ballpark_transformations");
  proj_create_operations = (PJ_OBJ_LIST* (*)( PJ_CONTEXT*, const PJ*, const PJ*, const PJ_OPERATION_FACTORY_CONTEXT*)) R_GetCCallable("libproj", "proj_create_operations");
  proj_list_get_count = (int (*)(const PJ_OBJ_LIST*)) R_GetCCallable("libproj", "proj_list_get_count");
  proj_list_get = (PJ* (*)(PJ_CONTEXT*, const PJ_OBJ_LIST*, int)) R_GetCCallable("libproj", "proj_list_get");
  proj_list_destroy = (void (*)(PJ_OBJ_LIST*)) R_GetCCallable("libproj", "proj_list_destroy");
  proj_get_suggested_operation = (int (*)(PJ_CONTEXT*, PJ_OBJ_LIST*, PJ_DIRECTION, PJ_COORD)) R_GetCCallable("libproj", "proj_get_suggested_operation");
  proj_crs_is_derived = (int (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_crs_is_derived");
  proj_crs_get_geodetic_crs = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_crs_get_geodetic_crs");
  proj_crs_get_horizontal_datum = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_crs_get_horizontal_datum");
  proj_crs_get_sub_crs = (PJ* (*)(PJ_CONTEXT*, const PJ*, int)) R_GetCCallable("libproj", "proj_crs_get_sub_crs");
  proj_crs_get_datum = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_crs_get_datum");
  proj_crs_get_datum_ensemble = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_crs_get_datum_ensemble");
  proj_crs_get_datum_forced = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_crs_get_datum_forced");
  proj_datum_ensemble_get_member_count = (int (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_datum_ensemble_get_member_count");
  proj_datum_ensemble_get_accuracy = (double (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_datum_ensemble_get_accuracy");
  proj_datum_ensemble_get_member = (PJ* (*)(PJ_CONTEXT*, const PJ*, int)) R_GetCCallable("libproj", "proj_datum_ensemble_get_member");
  proj_dynamic_datum_get_frame_reference_epoch = (double (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_dynamic_datum_get_frame_reference_epoch");
  proj_crs_get_coordinate_system = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_crs_get_coordinate_system");
  proj_cs_get_type = (PJ_COORDINATE_SYSTEM_TYPE (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_cs_get_type");
  proj_cs_get_axis_count = (int (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_cs_get_axis_count");
  proj_cs_get_axis_info = (int (*)(PJ_CONTEXT*, const PJ*, int, const char**, const char**, const char**, double*, const char**, const char**, const char**)) R_GetCCallable("libproj", "proj_cs_get_axis_info");
  proj_get_ellipsoid = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_get_ellipsoid");
  proj_ellipsoid_get_parameters = (int (*)(PJ_CONTEXT*, const PJ*, double*, double*, int*, double*)) R_GetCCallable("libproj", "proj_ellipsoid_get_parameters");
  proj_get_celestial_body_name = (const char* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_get_celestial_body_name");
  proj_get_prime_meridian = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_get_prime_meridian");
  proj_prime_meridian_get_parameters = (int (*)(PJ_CONTEXT*, const PJ*, double*, double*, const char**)) R_GetCCallable("libproj", "proj_prime_meridian_get_parameters");
  proj_crs_get_coordoperation = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_crs_get_coordoperation");
  proj_coordoperation_get_method_info = (int (*)(PJ_CONTEXT*, const PJ*, const char**, const char**, const char**)) R_GetCCallable("libproj", "proj_coordoperation_get_method_info");
  proj_coordoperation_is_instantiable = (int (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_coordoperation_is_instantiable");
  proj_coordoperation_has_ballpark_transformation = (int (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_coordoperation_has_ballpark_transformation");
  proj_coordoperation_get_param_count = (int (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_coordoperation_get_param_count");
  proj_coordoperation_get_param_index = (int (*)(PJ_CONTEXT*, const PJ*, const char*)) R_GetCCallable("libproj", "proj_coordoperation_get_param_index");
  proj_coordoperation_get_param = (int (*)(PJ_CONTEXT*, const PJ*, int, const char**, const char**, const char**, double*, const char**, double*, const char**, const char**, const char**, const char**)) R_GetCCallable("libproj", "proj_coordoperation_get_param");
  proj_coordoperation_get_grid_used_count = (int (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_coordoperation_get_grid_used_count");
  proj_coordoperation_get_grid_used = (int (*)(PJ_CONTEXT*, const PJ*, int, const char**, const char**, const char**, const char**, int*, int*, int*)) R_GetCCallable("libproj", "proj_coordoperation_get_grid_used");
  proj_coordoperation_get_accuracy = (double (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_coordoperation_get_accuracy");
  proj_coordoperation_get_towgs84_values = (int (*)(PJ_CONTEXT*, const PJ*, double*, int, int)) R_GetCCallable("libproj", "proj_coordoperation_get_towgs84_values");
  proj_coordoperation_create_inverse = (PJ* (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_coordoperation_create_inverse");
  proj_concatoperation_get_step_count = (int (*)(PJ_CONTEXT*, const PJ*)) R_GetCCallable("libproj", "proj_concatoperation_get_step_count");
  proj_concatoperation_get_step = (PJ* (*)(PJ_CONTEXT*, const PJ*, int)) R_GetCCallable("libproj", "proj_concatoperation_get_step");
}
