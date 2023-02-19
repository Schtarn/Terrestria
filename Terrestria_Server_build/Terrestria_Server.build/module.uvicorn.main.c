/* Generated code for Python module 'uvicorn.main'
 * created by Nuitka version 1.4.5
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_uvicorn$main" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_uvicorn$main;
PyDictObject *moduledict_uvicorn$main;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[245];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[245];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("uvicorn.main"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 245; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_uvicorn$main(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 245; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1544950f0bbc43e15311d8ca4d37ed05;
static PyCodeObject *codeobj_57cf602be32ad92d1d81963089affee6;
static PyCodeObject *codeobj_c5b72ebb35a2087d5a3f7752f30acc31;
static PyCodeObject *codeobj_d64fce5794a2bd1f0df58831f35ca409;
static PyCodeObject *codeobj_13facebbf5c76dfdd365507210f61755;
static PyCodeObject *codeobj_0a7ae587893cb5f52c8dc9024ff801f5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[237]); CHECK_OBJECT(module_filename_obj);
    codeobj_1544950f0bbc43e15311d8ca4d37ed05 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[238], mod_consts[239], NULL, 1, 0, 0);
    codeobj_57cf602be32ad92d1d81963089affee6 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[238], mod_consts[240], NULL, 1, 0, 0);
    codeobj_c5b72ebb35a2087d5a3f7752f30acc31 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[241], mod_consts[241], NULL, NULL, 0, 0, 0);
    codeobj_d64fce5794a2bd1f0df58831f35ca409 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], mod_consts[242], NULL, 45, 0, 0);
    codeobj_13facebbf5c76dfdd365507210f61755 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[243], NULL, 3, 0, 0);
    codeobj_0a7ae587893cb5f52c8dc9024ff801f5 = MAKE_CODE_OBJECT(module_filename_obj, 453, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[244], NULL, 1, 44, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__1_print_version(PyObject *annotations);


static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__2_main(PyObject *annotations);


static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__3_run(PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_uvicorn$main$$$function__1_print_version(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_param = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_13facebbf5c76dfdd365507210f61755;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_13facebbf5c76dfdd365507210f61755 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_13facebbf5c76dfdd365507210f61755)) {
        Py_XDECREF(cache_frame_13facebbf5c76dfdd365507210f61755);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13facebbf5c76dfdd365507210f61755 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13facebbf5c76dfdd365507210f61755 = MAKE_FUNCTION_FRAME(codeobj_13facebbf5c76dfdd365507210f61755, module_uvicorn$main, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_13facebbf5c76dfdd365507210f61755->m_type_description == NULL);
    frame_13facebbf5c76dfdd365507210f61755 = cache_frame_13facebbf5c76dfdd365507210f61755;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_13facebbf5c76dfdd365507210f61755);
    assert(Py_REFCNT(frame_13facebbf5c76dfdd365507210f61755) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_value);
        tmp_operand_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_1 = par_ctx;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[3];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            frame_13facebbf5c76dfdd365507210f61755->m_frame.f_lineno = 54;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            frame_13facebbf5c76dfdd365507210f61755->m_frame.f_lineno = 55;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[8]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            frame_13facebbf5c76dfdd365507210f61755->m_frame.f_lineno = 56;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[9]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_13facebbf5c76dfdd365507210f61755->m_frame.f_lineno = 50;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        if (par_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_ctx;
        frame_13facebbf5c76dfdd365507210f61755->m_frame.f_lineno = 59;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[11]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_13facebbf5c76dfdd365507210f61755, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13facebbf5c76dfdd365507210f61755->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13facebbf5c76dfdd365507210f61755, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13facebbf5c76dfdd365507210f61755,
        type_description_1,
        par_ctx,
        par_param,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_13facebbf5c76dfdd365507210f61755 == cache_frame_13facebbf5c76dfdd365507210f61755) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_13facebbf5c76dfdd365507210f61755);
        cache_frame_13facebbf5c76dfdd365507210f61755 = NULL;
    }

    assertFrameObject(frame_13facebbf5c76dfdd365507210f61755);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_uvicorn$main$$$function__2_main(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_uds = python_pars[3];
    PyObject *par_fd = python_pars[4];
    PyObject *par_loop = python_pars[5];
    PyObject *par_http = python_pars[6];
    PyObject *par_ws = python_pars[7];
    PyObject *par_ws_max_size = python_pars[8];
    PyObject *par_ws_ping_interval = python_pars[9];
    PyObject *par_ws_ping_timeout = python_pars[10];
    PyObject *par_ws_per_message_deflate = python_pars[11];
    PyObject *par_lifespan = python_pars[12];
    PyObject *par_interface = python_pars[13];
    PyObject *par_reload = python_pars[14];
    PyObject *par_reload_dirs = python_pars[15];
    PyObject *par_reload_includes = python_pars[16];
    PyObject *par_reload_excludes = python_pars[17];
    PyObject *par_reload_delay = python_pars[18];
    PyObject *par_workers = python_pars[19];
    PyObject *par_env_file = python_pars[20];
    PyObject *par_log_config = python_pars[21];
    PyObject *par_log_level = python_pars[22];
    PyObject *par_access_log = python_pars[23];
    PyObject *par_proxy_headers = python_pars[24];
    PyObject *par_server_header = python_pars[25];
    PyObject *par_date_header = python_pars[26];
    PyObject *par_forwarded_allow_ips = python_pars[27];
    PyObject *par_root_path = python_pars[28];
    PyObject *par_limit_concurrency = python_pars[29];
    PyObject *par_backlog = python_pars[30];
    PyObject *par_limit_max_requests = python_pars[31];
    PyObject *par_timeout_keep_alive = python_pars[32];
    PyObject *par_ssl_keyfile = python_pars[33];
    PyObject *par_ssl_certfile = python_pars[34];
    PyObject *par_ssl_keyfile_password = python_pars[35];
    PyObject *par_ssl_version = python_pars[36];
    PyObject *par_ssl_cert_reqs = python_pars[37];
    PyObject *par_ssl_ca_certs = python_pars[38];
    PyObject *par_ssl_ciphers = python_pars[39];
    PyObject *par_headers = python_pars[40];
    PyObject *par_use_colors = python_pars[41];
    PyObject *par_app_dir = python_pars[42];
    PyObject *par_h11_max_incomplete_event_size = python_pars[43];
    PyObject *par_factory = python_pars[44];
    PyObject *outline_0_var_header = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_d64fce5794a2bd1f0df58831f35ca409;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_1544950f0bbc43e15311d8ca4d37ed05_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d64fce5794a2bd1f0df58831f35ca409 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d64fce5794a2bd1f0df58831f35ca409)) {
        Py_XDECREF(cache_frame_d64fce5794a2bd1f0df58831f35ca409);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d64fce5794a2bd1f0df58831f35ca409 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d64fce5794a2bd1f0df58831f35ca409 = MAKE_FUNCTION_FRAME(codeobj_d64fce5794a2bd1f0df58831f35ca409, module_uvicorn$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d64fce5794a2bd1f0df58831f35ca409->m_type_description == NULL);
    frame_d64fce5794a2bd1f0df58831f35ca409 = cache_frame_d64fce5794a2bd1f0df58831f35ca409;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_d64fce5794a2bd1f0df58831f35ca409);
    assert(Py_REFCNT(frame_d64fce5794a2bd1f0df58831f35ca409) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_kw_call_dict_value_14_1;
        PyObject *tmp_kw_call_dict_value_15_1;
        PyObject *tmp_kw_call_dict_value_16_1;
        PyObject *tmp_kw_call_dict_value_17_1;
        PyObject *tmp_kw_call_dict_value_18_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_kw_call_dict_value_19_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_kw_call_dict_value_20_1;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_kw_call_dict_value_21_1;
        PyObject *tmp_kw_call_dict_value_22_1;
        PyObject *tmp_kw_call_dict_value_23_1;
        PyObject *tmp_kw_call_dict_value_24_1;
        PyObject *tmp_kw_call_dict_value_25_1;
        PyObject *tmp_kw_call_dict_value_26_1;
        PyObject *tmp_kw_call_dict_value_27_1;
        PyObject *tmp_kw_call_dict_value_28_1;
        PyObject *tmp_kw_call_dict_value_29_1;
        PyObject *tmp_kw_call_dict_value_30_1;
        PyObject *tmp_kw_call_dict_value_31_1;
        PyObject *tmp_kw_call_dict_value_32_1;
        PyObject *tmp_kw_call_dict_value_33_1;
        PyObject *tmp_kw_call_dict_value_34_1;
        PyObject *tmp_kw_call_dict_value_35_1;
        PyObject *tmp_kw_call_dict_value_36_1;
        PyObject *tmp_kw_call_dict_value_37_1;
        PyObject *tmp_kw_call_dict_value_38_1;
        PyObject *tmp_kw_call_dict_value_39_1;
        PyObject *tmp_kw_call_dict_value_40_1;
        PyObject *tmp_kw_call_dict_value_41_1;
        PyObject *tmp_kw_call_dict_value_42_1;
        PyObject *tmp_kw_call_dict_value_43_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_app);
        tmp_kw_call_arg_value_0_1 = par_app;
        CHECK_OBJECT(par_host);
        tmp_kw_call_dict_value_0_1 = par_host;
        CHECK_OBJECT(par_port);
        tmp_kw_call_dict_value_1_1 = par_port;
        CHECK_OBJECT(par_uds);
        tmp_kw_call_dict_value_2_1 = par_uds;
        CHECK_OBJECT(par_fd);
        tmp_kw_call_dict_value_3_1 = par_fd;
        CHECK_OBJECT(par_loop);
        tmp_kw_call_dict_value_4_1 = par_loop;
        CHECK_OBJECT(par_http);
        tmp_kw_call_dict_value_5_1 = par_http;
        CHECK_OBJECT(par_ws);
        tmp_kw_call_dict_value_6_1 = par_ws;
        CHECK_OBJECT(par_ws_max_size);
        tmp_kw_call_dict_value_7_1 = par_ws_max_size;
        CHECK_OBJECT(par_ws_ping_interval);
        tmp_kw_call_dict_value_8_1 = par_ws_ping_interval;
        CHECK_OBJECT(par_ws_ping_timeout);
        tmp_kw_call_dict_value_9_1 = par_ws_ping_timeout;
        CHECK_OBJECT(par_ws_per_message_deflate);
        tmp_kw_call_dict_value_10_1 = par_ws_per_message_deflate;
        CHECK_OBJECT(par_lifespan);
        tmp_kw_call_dict_value_11_1 = par_lifespan;
        CHECK_OBJECT(par_env_file);
        tmp_kw_call_dict_value_12_1 = par_env_file;
        CHECK_OBJECT(par_log_config);
        tmp_cmp_expr_left_1 = par_log_config;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_kw_call_dict_value_13_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_kw_call_dict_value_13_1 == NULL)) {
            tmp_kw_call_dict_value_13_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_kw_call_dict_value_13_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_log_config);
        tmp_kw_call_dict_value_13_1 = par_log_config;
        condexpr_end_1:;
        CHECK_OBJECT(par_log_level);
        tmp_kw_call_dict_value_14_1 = par_log_level;
        CHECK_OBJECT(par_access_log);
        tmp_kw_call_dict_value_15_1 = par_access_log;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_16_1 = par_interface;
        CHECK_OBJECT(par_reload);
        tmp_kw_call_dict_value_17_1 = par_reload;
        CHECK_OBJECT(par_reload_dirs);
        tmp_or_left_value_1 = par_reload_dirs;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = Py_None;
        tmp_kw_call_dict_value_18_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_kw_call_dict_value_18_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_reload_includes);
        tmp_or_left_value_2 = par_reload_includes;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = Py_None;
        tmp_kw_call_dict_value_19_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_kw_call_dict_value_19_1 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(par_reload_excludes);
        tmp_or_left_value_3 = par_reload_excludes;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = Py_None;
        tmp_kw_call_dict_value_20_1 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_kw_call_dict_value_20_1 = tmp_or_left_value_3;
        or_end_3:;
        CHECK_OBJECT(par_reload_delay);
        tmp_kw_call_dict_value_21_1 = par_reload_delay;
        CHECK_OBJECT(par_workers);
        tmp_kw_call_dict_value_22_1 = par_workers;
        CHECK_OBJECT(par_proxy_headers);
        tmp_kw_call_dict_value_23_1 = par_proxy_headers;
        CHECK_OBJECT(par_server_header);
        tmp_kw_call_dict_value_24_1 = par_server_header;
        CHECK_OBJECT(par_date_header);
        tmp_kw_call_dict_value_25_1 = par_date_header;
        CHECK_OBJECT(par_forwarded_allow_ips);
        tmp_kw_call_dict_value_26_1 = par_forwarded_allow_ips;
        CHECK_OBJECT(par_root_path);
        tmp_kw_call_dict_value_27_1 = par_root_path;
        CHECK_OBJECT(par_limit_concurrency);
        tmp_kw_call_dict_value_28_1 = par_limit_concurrency;
        CHECK_OBJECT(par_backlog);
        tmp_kw_call_dict_value_29_1 = par_backlog;
        CHECK_OBJECT(par_limit_max_requests);
        tmp_kw_call_dict_value_30_1 = par_limit_max_requests;
        CHECK_OBJECT(par_timeout_keep_alive);
        tmp_kw_call_dict_value_31_1 = par_timeout_keep_alive;
        CHECK_OBJECT(par_ssl_keyfile);
        tmp_kw_call_dict_value_32_1 = par_ssl_keyfile;
        CHECK_OBJECT(par_ssl_certfile);
        tmp_kw_call_dict_value_33_1 = par_ssl_certfile;
        CHECK_OBJECT(par_ssl_keyfile_password);
        tmp_kw_call_dict_value_34_1 = par_ssl_keyfile_password;
        CHECK_OBJECT(par_ssl_version);
        tmp_kw_call_dict_value_35_1 = par_ssl_version;
        CHECK_OBJECT(par_ssl_cert_reqs);
        tmp_kw_call_dict_value_36_1 = par_ssl_cert_reqs;
        CHECK_OBJECT(par_ssl_ca_certs);
        tmp_kw_call_dict_value_37_1 = par_ssl_ca_certs;
        CHECK_OBJECT(par_ssl_ciphers);
        tmp_kw_call_dict_value_38_1 = par_ssl_ciphers;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_headers);
            tmp_iter_arg_1 = par_headers;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2)) {
            Py_XDECREF(cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2 = MAKE_FUNCTION_FRAME(codeobj_1544950f0bbc43e15311d8ca4d37ed05, module_uvicorn$main, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2->m_type_description == NULL);
        frame_1544950f0bbc43e15311d8ca4d37ed05_2 = cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStack(frame_1544950f0bbc43e15311d8ca4d37ed05_2);
        assert(Py_REFCNT(frame_1544950f0bbc43e15311d8ca4d37ed05_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 445;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_header;
                outline_0_var_header = tmp_assign_source_4;
                Py_INCREF(outline_0_var_header);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_header);
            tmp_expression_value_1 = outline_0_var_header;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            frame_1544950f0bbc43e15311d8ca4d37ed05_2->m_frame.f_lineno = 445;
            tmp_append_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[15]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_kw_call_dict_value_39_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_kw_call_dict_value_39_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1544950f0bbc43e15311d8ca4d37ed05_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1544950f0bbc43e15311d8ca4d37ed05_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1544950f0bbc43e15311d8ca4d37ed05_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1544950f0bbc43e15311d8ca4d37ed05_2,
            type_description_2,
            outline_0_var_header
        );


        // Release cached frame if used for exception.
        if (frame_1544950f0bbc43e15311d8ca4d37ed05_2 == cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2);
            cache_frame_1544950f0bbc43e15311d8ca4d37ed05_2 = NULL;
        }

        assertFrameObject(frame_1544950f0bbc43e15311d8ca4d37ed05_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_header);
        outline_0_var_header = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_header);
        outline_0_var_header = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 445;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_use_colors);
        tmp_kw_call_dict_value_40_1 = par_use_colors;
        CHECK_OBJECT(par_factory);
        tmp_kw_call_dict_value_41_1 = par_factory;
        CHECK_OBJECT(par_app_dir);
        tmp_kw_call_dict_value_42_1 = par_app_dir;
        CHECK_OBJECT(par_h11_max_incomplete_event_size);
        tmp_kw_call_dict_value_43_1 = par_h11_max_incomplete_event_size;
        frame_d64fce5794a2bd1f0df58831f35ca409->m_frame.f_lineno = 404;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[44] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1, tmp_kw_call_dict_value_26_1, tmp_kw_call_dict_value_27_1, tmp_kw_call_dict_value_28_1, tmp_kw_call_dict_value_29_1, tmp_kw_call_dict_value_30_1, tmp_kw_call_dict_value_31_1, tmp_kw_call_dict_value_32_1, tmp_kw_call_dict_value_33_1, tmp_kw_call_dict_value_34_1, tmp_kw_call_dict_value_35_1, tmp_kw_call_dict_value_36_1, tmp_kw_call_dict_value_37_1, tmp_kw_call_dict_value_38_1, tmp_kw_call_dict_value_39_1, tmp_kw_call_dict_value_40_1, tmp_kw_call_dict_value_41_1, tmp_kw_call_dict_value_42_1, tmp_kw_call_dict_value_43_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_39_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d64fce5794a2bd1f0df58831f35ca409, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d64fce5794a2bd1f0df58831f35ca409->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d64fce5794a2bd1f0df58831f35ca409, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d64fce5794a2bd1f0df58831f35ca409,
        type_description_1,
        par_app,
        par_host,
        par_port,
        par_uds,
        par_fd,
        par_loop,
        par_http,
        par_ws,
        par_ws_max_size,
        par_ws_ping_interval,
        par_ws_ping_timeout,
        par_ws_per_message_deflate,
        par_lifespan,
        par_interface,
        par_reload,
        par_reload_dirs,
        par_reload_includes,
        par_reload_excludes,
        par_reload_delay,
        par_workers,
        par_env_file,
        par_log_config,
        par_log_level,
        par_access_log,
        par_proxy_headers,
        par_server_header,
        par_date_header,
        par_forwarded_allow_ips,
        par_root_path,
        par_limit_concurrency,
        par_backlog,
        par_limit_max_requests,
        par_timeout_keep_alive,
        par_ssl_keyfile,
        par_ssl_certfile,
        par_ssl_keyfile_password,
        par_ssl_version,
        par_ssl_cert_reqs,
        par_ssl_ca_certs,
        par_ssl_ciphers,
        par_headers,
        par_use_colors,
        par_app_dir,
        par_h11_max_incomplete_event_size,
        par_factory
    );


    // Release cached frame if used for exception.
    if (frame_d64fce5794a2bd1f0df58831f35ca409 == cache_frame_d64fce5794a2bd1f0df58831f35ca409) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d64fce5794a2bd1f0df58831f35ca409);
        cache_frame_d64fce5794a2bd1f0df58831f35ca409 = NULL;
    }

    assertFrameObject(frame_d64fce5794a2bd1f0df58831f35ca409);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_fd);
    Py_DECREF(par_fd);
    CHECK_OBJECT(par_loop);
    Py_DECREF(par_loop);
    CHECK_OBJECT(par_http);
    Py_DECREF(par_http);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_ws_max_size);
    Py_DECREF(par_ws_max_size);
    CHECK_OBJECT(par_ws_ping_interval);
    Py_DECREF(par_ws_ping_interval);
    CHECK_OBJECT(par_ws_ping_timeout);
    Py_DECREF(par_ws_ping_timeout);
    CHECK_OBJECT(par_ws_per_message_deflate);
    Py_DECREF(par_ws_per_message_deflate);
    CHECK_OBJECT(par_lifespan);
    Py_DECREF(par_lifespan);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    CHECK_OBJECT(par_reload);
    Py_DECREF(par_reload);
    CHECK_OBJECT(par_reload_dirs);
    Py_DECREF(par_reload_dirs);
    CHECK_OBJECT(par_reload_includes);
    Py_DECREF(par_reload_includes);
    CHECK_OBJECT(par_reload_excludes);
    Py_DECREF(par_reload_excludes);
    CHECK_OBJECT(par_reload_delay);
    Py_DECREF(par_reload_delay);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_env_file);
    Py_DECREF(par_env_file);
    CHECK_OBJECT(par_log_config);
    Py_DECREF(par_log_config);
    CHECK_OBJECT(par_log_level);
    Py_DECREF(par_log_level);
    CHECK_OBJECT(par_access_log);
    Py_DECREF(par_access_log);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_server_header);
    Py_DECREF(par_server_header);
    CHECK_OBJECT(par_date_header);
    Py_DECREF(par_date_header);
    CHECK_OBJECT(par_forwarded_allow_ips);
    Py_DECREF(par_forwarded_allow_ips);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_limit_concurrency);
    Py_DECREF(par_limit_concurrency);
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    CHECK_OBJECT(par_limit_max_requests);
    Py_DECREF(par_limit_max_requests);
    CHECK_OBJECT(par_timeout_keep_alive);
    Py_DECREF(par_timeout_keep_alive);
    CHECK_OBJECT(par_ssl_keyfile);
    Py_DECREF(par_ssl_keyfile);
    CHECK_OBJECT(par_ssl_certfile);
    Py_DECREF(par_ssl_certfile);
    CHECK_OBJECT(par_ssl_keyfile_password);
    Py_DECREF(par_ssl_keyfile_password);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_ssl_cert_reqs);
    Py_DECREF(par_ssl_cert_reqs);
    CHECK_OBJECT(par_ssl_ca_certs);
    Py_DECREF(par_ssl_ca_certs);
    CHECK_OBJECT(par_ssl_ciphers);
    Py_DECREF(par_ssl_ciphers);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_use_colors);
    Py_DECREF(par_use_colors);
    CHECK_OBJECT(par_app_dir);
    Py_DECREF(par_app_dir);
    CHECK_OBJECT(par_h11_max_incomplete_event_size);
    Py_DECREF(par_h11_max_incomplete_event_size);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_fd);
    Py_DECREF(par_fd);
    CHECK_OBJECT(par_loop);
    Py_DECREF(par_loop);
    CHECK_OBJECT(par_http);
    Py_DECREF(par_http);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_ws_max_size);
    Py_DECREF(par_ws_max_size);
    CHECK_OBJECT(par_ws_ping_interval);
    Py_DECREF(par_ws_ping_interval);
    CHECK_OBJECT(par_ws_ping_timeout);
    Py_DECREF(par_ws_ping_timeout);
    CHECK_OBJECT(par_ws_per_message_deflate);
    Py_DECREF(par_ws_per_message_deflate);
    CHECK_OBJECT(par_lifespan);
    Py_DECREF(par_lifespan);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    CHECK_OBJECT(par_reload);
    Py_DECREF(par_reload);
    CHECK_OBJECT(par_reload_dirs);
    Py_DECREF(par_reload_dirs);
    CHECK_OBJECT(par_reload_includes);
    Py_DECREF(par_reload_includes);
    CHECK_OBJECT(par_reload_excludes);
    Py_DECREF(par_reload_excludes);
    CHECK_OBJECT(par_reload_delay);
    Py_DECREF(par_reload_delay);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_env_file);
    Py_DECREF(par_env_file);
    CHECK_OBJECT(par_log_config);
    Py_DECREF(par_log_config);
    CHECK_OBJECT(par_log_level);
    Py_DECREF(par_log_level);
    CHECK_OBJECT(par_access_log);
    Py_DECREF(par_access_log);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_server_header);
    Py_DECREF(par_server_header);
    CHECK_OBJECT(par_date_header);
    Py_DECREF(par_date_header);
    CHECK_OBJECT(par_forwarded_allow_ips);
    Py_DECREF(par_forwarded_allow_ips);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_limit_concurrency);
    Py_DECREF(par_limit_concurrency);
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    CHECK_OBJECT(par_limit_max_requests);
    Py_DECREF(par_limit_max_requests);
    CHECK_OBJECT(par_timeout_keep_alive);
    Py_DECREF(par_timeout_keep_alive);
    CHECK_OBJECT(par_ssl_keyfile);
    Py_DECREF(par_ssl_keyfile);
    CHECK_OBJECT(par_ssl_certfile);
    Py_DECREF(par_ssl_certfile);
    CHECK_OBJECT(par_ssl_keyfile_password);
    Py_DECREF(par_ssl_keyfile_password);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_ssl_cert_reqs);
    Py_DECREF(par_ssl_cert_reqs);
    CHECK_OBJECT(par_ssl_ca_certs);
    Py_DECREF(par_ssl_ca_certs);
    CHECK_OBJECT(par_ssl_ciphers);
    Py_DECREF(par_ssl_ciphers);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_use_colors);
    Py_DECREF(par_use_colors);
    CHECK_OBJECT(par_app_dir);
    Py_DECREF(par_app_dir);
    CHECK_OBJECT(par_h11_max_incomplete_event_size);
    Py_DECREF(par_h11_max_incomplete_event_size);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_uvicorn$main$$$function__3_run(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_uds = python_pars[3];
    PyObject *par_fd = python_pars[4];
    PyObject *par_loop = python_pars[5];
    PyObject *par_http = python_pars[6];
    PyObject *par_ws = python_pars[7];
    PyObject *par_ws_max_size = python_pars[8];
    PyObject *par_ws_ping_interval = python_pars[9];
    PyObject *par_ws_ping_timeout = python_pars[10];
    PyObject *par_ws_per_message_deflate = python_pars[11];
    PyObject *par_lifespan = python_pars[12];
    PyObject *par_interface = python_pars[13];
    PyObject *par_reload = python_pars[14];
    PyObject *par_reload_dirs = python_pars[15];
    PyObject *par_reload_includes = python_pars[16];
    PyObject *par_reload_excludes = python_pars[17];
    PyObject *par_reload_delay = python_pars[18];
    PyObject *par_workers = python_pars[19];
    PyObject *par_env_file = python_pars[20];
    PyObject *par_log_config = python_pars[21];
    PyObject *par_log_level = python_pars[22];
    PyObject *par_access_log = python_pars[23];
    PyObject *par_proxy_headers = python_pars[24];
    PyObject *par_server_header = python_pars[25];
    PyObject *par_date_header = python_pars[26];
    PyObject *par_forwarded_allow_ips = python_pars[27];
    PyObject *par_root_path = python_pars[28];
    PyObject *par_limit_concurrency = python_pars[29];
    PyObject *par_backlog = python_pars[30];
    PyObject *par_limit_max_requests = python_pars[31];
    PyObject *par_timeout_keep_alive = python_pars[32];
    PyObject *par_ssl_keyfile = python_pars[33];
    PyObject *par_ssl_certfile = python_pars[34];
    PyObject *par_ssl_keyfile_password = python_pars[35];
    PyObject *par_ssl_version = python_pars[36];
    PyObject *par_ssl_cert_reqs = python_pars[37];
    PyObject *par_ssl_ca_certs = python_pars[38];
    PyObject *par_ssl_ciphers = python_pars[39];
    PyObject *par_headers = python_pars[40];
    PyObject *par_use_colors = python_pars[41];
    PyObject *par_app_dir = python_pars[42];
    PyObject *par_factory = python_pars[43];
    PyObject *par_h11_max_incomplete_event_size = python_pars[44];
    PyObject *var_config = NULL;
    PyObject *var_server = NULL;
    PyObject *var_logger = NULL;
    PyObject *var_sock = NULL;
    struct Nuitka_FrameObject *frame_0a7ae587893cb5f52c8dc9024ff801f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0a7ae587893cb5f52c8dc9024ff801f5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0a7ae587893cb5f52c8dc9024ff801f5)) {
        Py_XDECREF(cache_frame_0a7ae587893cb5f52c8dc9024ff801f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a7ae587893cb5f52c8dc9024ff801f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a7ae587893cb5f52c8dc9024ff801f5 = MAKE_FUNCTION_FRAME(codeobj_0a7ae587893cb5f52c8dc9024ff801f5, module_uvicorn$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a7ae587893cb5f52c8dc9024ff801f5->m_type_description == NULL);
    frame_0a7ae587893cb5f52c8dc9024ff801f5 = cache_frame_0a7ae587893cb5f52c8dc9024ff801f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0a7ae587893cb5f52c8dc9024ff801f5);
    assert(Py_REFCNT(frame_0a7ae587893cb5f52c8dc9024ff801f5) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_app_dir);
        tmp_cmp_expr_left_1 = par_app_dir;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[20];
        CHECK_OBJECT(par_app_dir);
        tmp_args_element_value_2 = par_app_dir;
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 504;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_kw_call_dict_value_13_1;
        PyObject *tmp_kw_call_dict_value_14_1;
        PyObject *tmp_kw_call_dict_value_15_1;
        PyObject *tmp_kw_call_dict_value_16_1;
        PyObject *tmp_kw_call_dict_value_17_1;
        PyObject *tmp_kw_call_dict_value_18_1;
        PyObject *tmp_kw_call_dict_value_19_1;
        PyObject *tmp_kw_call_dict_value_20_1;
        PyObject *tmp_kw_call_dict_value_21_1;
        PyObject *tmp_kw_call_dict_value_22_1;
        PyObject *tmp_kw_call_dict_value_23_1;
        PyObject *tmp_kw_call_dict_value_24_1;
        PyObject *tmp_kw_call_dict_value_25_1;
        PyObject *tmp_kw_call_dict_value_26_1;
        PyObject *tmp_kw_call_dict_value_27_1;
        PyObject *tmp_kw_call_dict_value_28_1;
        PyObject *tmp_kw_call_dict_value_29_1;
        PyObject *tmp_kw_call_dict_value_30_1;
        PyObject *tmp_kw_call_dict_value_31_1;
        PyObject *tmp_kw_call_dict_value_32_1;
        PyObject *tmp_kw_call_dict_value_33_1;
        PyObject *tmp_kw_call_dict_value_34_1;
        PyObject *tmp_kw_call_dict_value_35_1;
        PyObject *tmp_kw_call_dict_value_36_1;
        PyObject *tmp_kw_call_dict_value_37_1;
        PyObject *tmp_kw_call_dict_value_38_1;
        PyObject *tmp_kw_call_dict_value_39_1;
        PyObject *tmp_kw_call_dict_value_40_1;
        PyObject *tmp_kw_call_dict_value_41_1;
        PyObject *tmp_kw_call_dict_value_42_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_app);
        tmp_kw_call_arg_value_0_1 = par_app;
        CHECK_OBJECT(par_host);
        tmp_kw_call_dict_value_0_1 = par_host;
        CHECK_OBJECT(par_port);
        tmp_kw_call_dict_value_1_1 = par_port;
        CHECK_OBJECT(par_uds);
        tmp_kw_call_dict_value_2_1 = par_uds;
        CHECK_OBJECT(par_fd);
        tmp_kw_call_dict_value_3_1 = par_fd;
        CHECK_OBJECT(par_loop);
        tmp_kw_call_dict_value_4_1 = par_loop;
        CHECK_OBJECT(par_http);
        tmp_kw_call_dict_value_5_1 = par_http;
        CHECK_OBJECT(par_ws);
        tmp_kw_call_dict_value_6_1 = par_ws;
        CHECK_OBJECT(par_ws_max_size);
        tmp_kw_call_dict_value_7_1 = par_ws_max_size;
        CHECK_OBJECT(par_ws_ping_interval);
        tmp_kw_call_dict_value_8_1 = par_ws_ping_interval;
        CHECK_OBJECT(par_ws_ping_timeout);
        tmp_kw_call_dict_value_9_1 = par_ws_ping_timeout;
        CHECK_OBJECT(par_ws_per_message_deflate);
        tmp_kw_call_dict_value_10_1 = par_ws_per_message_deflate;
        CHECK_OBJECT(par_lifespan);
        tmp_kw_call_dict_value_11_1 = par_lifespan;
        CHECK_OBJECT(par_interface);
        tmp_kw_call_dict_value_12_1 = par_interface;
        CHECK_OBJECT(par_reload);
        tmp_kw_call_dict_value_13_1 = par_reload;
        CHECK_OBJECT(par_reload_dirs);
        tmp_kw_call_dict_value_14_1 = par_reload_dirs;
        CHECK_OBJECT(par_reload_includes);
        tmp_kw_call_dict_value_15_1 = par_reload_includes;
        CHECK_OBJECT(par_reload_excludes);
        tmp_kw_call_dict_value_16_1 = par_reload_excludes;
        CHECK_OBJECT(par_reload_delay);
        tmp_kw_call_dict_value_17_1 = par_reload_delay;
        CHECK_OBJECT(par_workers);
        tmp_kw_call_dict_value_18_1 = par_workers;
        CHECK_OBJECT(par_env_file);
        tmp_kw_call_dict_value_19_1 = par_env_file;
        CHECK_OBJECT(par_log_config);
        tmp_kw_call_dict_value_20_1 = par_log_config;
        CHECK_OBJECT(par_log_level);
        tmp_kw_call_dict_value_21_1 = par_log_level;
        CHECK_OBJECT(par_access_log);
        tmp_kw_call_dict_value_22_1 = par_access_log;
        CHECK_OBJECT(par_proxy_headers);
        tmp_kw_call_dict_value_23_1 = par_proxy_headers;
        CHECK_OBJECT(par_server_header);
        tmp_kw_call_dict_value_24_1 = par_server_header;
        CHECK_OBJECT(par_date_header);
        tmp_kw_call_dict_value_25_1 = par_date_header;
        CHECK_OBJECT(par_forwarded_allow_ips);
        tmp_kw_call_dict_value_26_1 = par_forwarded_allow_ips;
        CHECK_OBJECT(par_root_path);
        tmp_kw_call_dict_value_27_1 = par_root_path;
        CHECK_OBJECT(par_limit_concurrency);
        tmp_kw_call_dict_value_28_1 = par_limit_concurrency;
        CHECK_OBJECT(par_backlog);
        tmp_kw_call_dict_value_29_1 = par_backlog;
        CHECK_OBJECT(par_limit_max_requests);
        tmp_kw_call_dict_value_30_1 = par_limit_max_requests;
        CHECK_OBJECT(par_timeout_keep_alive);
        tmp_kw_call_dict_value_31_1 = par_timeout_keep_alive;
        CHECK_OBJECT(par_ssl_keyfile);
        tmp_kw_call_dict_value_32_1 = par_ssl_keyfile;
        CHECK_OBJECT(par_ssl_certfile);
        tmp_kw_call_dict_value_33_1 = par_ssl_certfile;
        CHECK_OBJECT(par_ssl_keyfile_password);
        tmp_kw_call_dict_value_34_1 = par_ssl_keyfile_password;
        CHECK_OBJECT(par_ssl_version);
        tmp_kw_call_dict_value_35_1 = par_ssl_version;
        CHECK_OBJECT(par_ssl_cert_reqs);
        tmp_kw_call_dict_value_36_1 = par_ssl_cert_reqs;
        CHECK_OBJECT(par_ssl_ca_certs);
        tmp_kw_call_dict_value_37_1 = par_ssl_ca_certs;
        CHECK_OBJECT(par_ssl_ciphers);
        tmp_kw_call_dict_value_38_1 = par_ssl_ciphers;
        CHECK_OBJECT(par_headers);
        tmp_kw_call_dict_value_39_1 = par_headers;
        CHECK_OBJECT(par_use_colors);
        tmp_kw_call_dict_value_40_1 = par_use_colors;
        CHECK_OBJECT(par_factory);
        tmp_kw_call_dict_value_41_1 = par_factory;
        CHECK_OBJECT(par_h11_max_incomplete_event_size);
        tmp_kw_call_dict_value_42_1 = par_h11_max_incomplete_event_size;
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 506;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[43] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1, tmp_kw_call_dict_value_26_1, tmp_kw_call_dict_value_27_1, tmp_kw_call_dict_value_28_1, tmp_kw_call_dict_value_29_1, tmp_kw_call_dict_value_30_1, tmp_kw_call_dict_value_31_1, tmp_kw_call_dict_value_32_1, tmp_kw_call_dict_value_33_1, tmp_kw_call_dict_value_34_1, tmp_kw_call_dict_value_35_1, tmp_kw_call_dict_value_36_1, tmp_kw_call_dict_value_37_1, tmp_kw_call_dict_value_38_1, tmp_kw_call_dict_value_39_1, tmp_kw_call_dict_value_40_1, tmp_kw_call_dict_value_41_1, tmp_kw_call_dict_value_42_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[22]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_config == NULL);
        var_config = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_kw_call_value_0_1 = var_config;
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 552;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[24]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_server == NULL);
        var_server = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_config);
        tmp_expression_value_3 = var_config;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_config);
        tmp_expression_value_4 = var_config;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[27];
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_app);
        tmp_isinstance_inst_1 = par_app;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 555;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_logger == NULL);
        var_logger = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_logger);
        tmp_called_instance_2 = var_logger;
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 556;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 560;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[11],
            PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_config);
        tmp_expression_value_5 = var_config;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[34]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 562;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_config);
        tmp_called_instance_4 = var_config;
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 563;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[35]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sock == NULL);
        var_sock = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_call_result_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_kw_call_arg_value_0_2 = var_config;
        CHECK_OBJECT(var_server);
        tmp_expression_value_6 = var_server;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[12]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sock);
        tmp_list_element_1 = var_sock;
        tmp_kw_call_dict_value_1_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_1_2, 0, tmp_list_element_1);
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 564;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_called_instance_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 564;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[12]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_config);
        tmp_expression_value_7 = var_config;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[26]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[27];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_config);
        tmp_called_instance_6 = var_config;
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 566;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[35]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sock == NULL);
        var_sock = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_call_result_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_kw_call_arg_value_0_3 = var_config;
        CHECK_OBJECT(var_server);
        tmp_expression_value_8 = var_server;
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[12]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sock);
        tmp_list_element_2 = var_sock;
        tmp_kw_call_dict_value_1_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_1_3, 0, tmp_list_element_2);
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 567;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_called_instance_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 567;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[12]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_server);
        tmp_called_instance_8 = var_server;
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 569;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[12]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_4:;
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        PyObject *tmp_exists_arg_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_config);
        tmp_expression_value_9 = var_config;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[39]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_config);
        tmp_expression_value_10 = var_config;
        tmp_exists_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[39]);
        if (tmp_exists_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_capi_result_1 = OS_PATH_FILE_EXISTS(tmp_exists_arg_1);
        Py_DECREF(tmp_exists_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 570;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_expression_value_11 == NULL));
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[41]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_expression_value_12 = var_config;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[39]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 571;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_13;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_15;
        if (var_server == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_server;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[43]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_config);
        tmp_expression_value_14 = var_config;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[34]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(var_config);
        tmp_expression_value_15 = var_config;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[26]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[27];
        tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_6 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_6 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[11]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 574;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame.f_lineno = 574;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a7ae587893cb5f52c8dc9024ff801f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a7ae587893cb5f52c8dc9024ff801f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a7ae587893cb5f52c8dc9024ff801f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a7ae587893cb5f52c8dc9024ff801f5,
        type_description_1,
        par_app,
        par_host,
        par_port,
        par_uds,
        par_fd,
        par_loop,
        par_http,
        par_ws,
        par_ws_max_size,
        par_ws_ping_interval,
        par_ws_ping_timeout,
        par_ws_per_message_deflate,
        par_lifespan,
        par_interface,
        par_reload,
        par_reload_dirs,
        par_reload_includes,
        par_reload_excludes,
        par_reload_delay,
        par_workers,
        par_env_file,
        par_log_config,
        par_log_level,
        par_access_log,
        par_proxy_headers,
        par_server_header,
        par_date_header,
        par_forwarded_allow_ips,
        par_root_path,
        par_limit_concurrency,
        par_backlog,
        par_limit_max_requests,
        par_timeout_keep_alive,
        par_ssl_keyfile,
        par_ssl_certfile,
        par_ssl_keyfile_password,
        par_ssl_version,
        par_ssl_cert_reqs,
        par_ssl_ca_certs,
        par_ssl_ciphers,
        par_headers,
        par_use_colors,
        par_app_dir,
        par_factory,
        par_h11_max_incomplete_event_size,
        var_config,
        var_server,
        var_logger,
        var_sock
    );


    // Release cached frame if used for exception.
    if (frame_0a7ae587893cb5f52c8dc9024ff801f5 == cache_frame_0a7ae587893cb5f52c8dc9024ff801f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a7ae587893cb5f52c8dc9024ff801f5);
        cache_frame_0a7ae587893cb5f52c8dc9024ff801f5 = NULL;
    }

    assertFrameObject(frame_0a7ae587893cb5f52c8dc9024ff801f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_config);
    Py_DECREF(var_config);
    var_config = NULL;
    Py_XDECREF(var_server);
    var_server = NULL;
    Py_XDECREF(var_logger);
    var_logger = NULL;
    Py_XDECREF(var_sock);
    var_sock = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_config);
    var_config = NULL;
    Py_XDECREF(var_server);
    var_server = NULL;
    Py_XDECREF(var_logger);
    var_logger = NULL;
    Py_XDECREF(var_sock);
    var_sock = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_fd);
    Py_DECREF(par_fd);
    CHECK_OBJECT(par_loop);
    Py_DECREF(par_loop);
    CHECK_OBJECT(par_http);
    Py_DECREF(par_http);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_ws_max_size);
    Py_DECREF(par_ws_max_size);
    CHECK_OBJECT(par_ws_ping_interval);
    Py_DECREF(par_ws_ping_interval);
    CHECK_OBJECT(par_ws_ping_timeout);
    Py_DECREF(par_ws_ping_timeout);
    CHECK_OBJECT(par_ws_per_message_deflate);
    Py_DECREF(par_ws_per_message_deflate);
    CHECK_OBJECT(par_lifespan);
    Py_DECREF(par_lifespan);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    CHECK_OBJECT(par_reload);
    Py_DECREF(par_reload);
    CHECK_OBJECT(par_reload_dirs);
    Py_DECREF(par_reload_dirs);
    CHECK_OBJECT(par_reload_includes);
    Py_DECREF(par_reload_includes);
    CHECK_OBJECT(par_reload_excludes);
    Py_DECREF(par_reload_excludes);
    CHECK_OBJECT(par_reload_delay);
    Py_DECREF(par_reload_delay);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_env_file);
    Py_DECREF(par_env_file);
    CHECK_OBJECT(par_log_config);
    Py_DECREF(par_log_config);
    CHECK_OBJECT(par_log_level);
    Py_DECREF(par_log_level);
    CHECK_OBJECT(par_access_log);
    Py_DECREF(par_access_log);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_server_header);
    Py_DECREF(par_server_header);
    CHECK_OBJECT(par_date_header);
    Py_DECREF(par_date_header);
    CHECK_OBJECT(par_forwarded_allow_ips);
    Py_DECREF(par_forwarded_allow_ips);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_limit_concurrency);
    Py_DECREF(par_limit_concurrency);
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    CHECK_OBJECT(par_limit_max_requests);
    Py_DECREF(par_limit_max_requests);
    CHECK_OBJECT(par_timeout_keep_alive);
    Py_DECREF(par_timeout_keep_alive);
    CHECK_OBJECT(par_ssl_keyfile);
    Py_DECREF(par_ssl_keyfile);
    CHECK_OBJECT(par_ssl_certfile);
    Py_DECREF(par_ssl_certfile);
    CHECK_OBJECT(par_ssl_keyfile_password);
    Py_DECREF(par_ssl_keyfile_password);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_ssl_cert_reqs);
    Py_DECREF(par_ssl_cert_reqs);
    CHECK_OBJECT(par_ssl_ca_certs);
    Py_DECREF(par_ssl_ca_certs);
    CHECK_OBJECT(par_ssl_ciphers);
    Py_DECREF(par_ssl_ciphers);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_use_colors);
    Py_DECREF(par_use_colors);
    CHECK_OBJECT(par_app_dir);
    Py_DECREF(par_app_dir);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    CHECK_OBJECT(par_h11_max_incomplete_event_size);
    Py_DECREF(par_h11_max_incomplete_event_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_uds);
    Py_DECREF(par_uds);
    CHECK_OBJECT(par_fd);
    Py_DECREF(par_fd);
    CHECK_OBJECT(par_loop);
    Py_DECREF(par_loop);
    CHECK_OBJECT(par_http);
    Py_DECREF(par_http);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_ws_max_size);
    Py_DECREF(par_ws_max_size);
    CHECK_OBJECT(par_ws_ping_interval);
    Py_DECREF(par_ws_ping_interval);
    CHECK_OBJECT(par_ws_ping_timeout);
    Py_DECREF(par_ws_ping_timeout);
    CHECK_OBJECT(par_ws_per_message_deflate);
    Py_DECREF(par_ws_per_message_deflate);
    CHECK_OBJECT(par_lifespan);
    Py_DECREF(par_lifespan);
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    CHECK_OBJECT(par_reload);
    Py_DECREF(par_reload);
    CHECK_OBJECT(par_reload_dirs);
    Py_DECREF(par_reload_dirs);
    CHECK_OBJECT(par_reload_includes);
    Py_DECREF(par_reload_includes);
    CHECK_OBJECT(par_reload_excludes);
    Py_DECREF(par_reload_excludes);
    CHECK_OBJECT(par_reload_delay);
    Py_DECREF(par_reload_delay);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_env_file);
    Py_DECREF(par_env_file);
    CHECK_OBJECT(par_log_config);
    Py_DECREF(par_log_config);
    CHECK_OBJECT(par_log_level);
    Py_DECREF(par_log_level);
    CHECK_OBJECT(par_access_log);
    Py_DECREF(par_access_log);
    CHECK_OBJECT(par_proxy_headers);
    Py_DECREF(par_proxy_headers);
    CHECK_OBJECT(par_server_header);
    Py_DECREF(par_server_header);
    CHECK_OBJECT(par_date_header);
    Py_DECREF(par_date_header);
    CHECK_OBJECT(par_forwarded_allow_ips);
    Py_DECREF(par_forwarded_allow_ips);
    CHECK_OBJECT(par_root_path);
    Py_DECREF(par_root_path);
    CHECK_OBJECT(par_limit_concurrency);
    Py_DECREF(par_limit_concurrency);
    CHECK_OBJECT(par_backlog);
    Py_DECREF(par_backlog);
    CHECK_OBJECT(par_limit_max_requests);
    Py_DECREF(par_limit_max_requests);
    CHECK_OBJECT(par_timeout_keep_alive);
    Py_DECREF(par_timeout_keep_alive);
    CHECK_OBJECT(par_ssl_keyfile);
    Py_DECREF(par_ssl_keyfile);
    CHECK_OBJECT(par_ssl_certfile);
    Py_DECREF(par_ssl_certfile);
    CHECK_OBJECT(par_ssl_keyfile_password);
    Py_DECREF(par_ssl_keyfile_password);
    CHECK_OBJECT(par_ssl_version);
    Py_DECREF(par_ssl_version);
    CHECK_OBJECT(par_ssl_cert_reqs);
    Py_DECREF(par_ssl_cert_reqs);
    CHECK_OBJECT(par_ssl_ca_certs);
    Py_DECREF(par_ssl_ca_certs);
    CHECK_OBJECT(par_ssl_ciphers);
    Py_DECREF(par_ssl_ciphers);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_use_colors);
    Py_DECREF(par_use_colors);
    CHECK_OBJECT(par_app_dir);
    Py_DECREF(par_app_dir);
    CHECK_OBJECT(par_factory);
    Py_DECREF(par_factory);
    CHECK_OBJECT(par_h11_max_incomplete_event_size);
    Py_DECREF(par_h11_max_incomplete_event_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__1_print_version(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_uvicorn$main$$$function__1_print_version,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13facebbf5c76dfdd365507210f61755,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_uvicorn$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__2_main(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_uvicorn$main$$$function__2_main,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d64fce5794a2bd1f0df58831f35ca409,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_uvicorn$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_uvicorn$main$$$function__3_run(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_uvicorn$main$$$function__3_run,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a7ae587893cb5f52c8dc9024ff801f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_uvicorn$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_uvicorn$main[] = {
    impl_uvicorn$main$$$function__1_print_version,
    impl_uvicorn$main$$$function__2_main,
    impl_uvicorn$main$$$function__3_run,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_uvicorn$main;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_uvicorn$main) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_uvicorn$main[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_uvicorn$main,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_uvicorn$main(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("uvicorn.main");

    // Store the module for future use.
    module_uvicorn$main = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("uvicorn.main: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("uvicorn.main: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("uvicorn.main: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inituvicorn$main\n");

    moduledict_uvicorn$main = MODULE_DICT(module_uvicorn$main);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_uvicorn$main,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_uvicorn$main,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[221]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_uvicorn$main,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_uvicorn$main,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_uvicorn$main,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_uvicorn$main);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_uvicorn$main);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_key = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_c5b72ebb35a2087d5a3f7752f30acc31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_57cf602be32ad92d1d81963089affee6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_57cf602be32ad92d1d81963089affee6_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    frame_c5b72ebb35a2087d5a3f7752f30acc31 = MAKE_MODULE_FRAME(codeobj_c5b72ebb35a2087d5a3f7752f30acc31, module_uvicorn$main);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c5b72ebb35a2087d5a3f7752f30acc31);
    assert(Py_REFCNT(frame_c5b72ebb35a2087d5a3f7752f30acc31) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[49], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[51];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[28];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[6];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[52];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[1];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[54];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[55];
        tmp_level_value_6 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[56],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[4];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 12;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[57];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[58];
        tmp_level_value_8 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 13;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[59],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[59]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[60],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[60]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[61],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[61]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[62],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[62]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[13],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[13]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[63],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[63]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[64],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[64]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[65],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[65]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[21],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[21]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[66],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[66]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[67],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[67]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[68],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[68]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[69],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[69]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[70],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[70]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_28);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[71];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[72];
        tmp_level_value_9 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 29;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[23],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[23]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[73],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[73]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_31);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[74];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_uvicorn$main;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[75];
        tmp_level_value_10 = mod_consts[20];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 30;
        tmp_assign_source_32 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[36],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[36]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_uvicorn$main,
                mod_consts[38],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[38]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_34);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[76]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[77]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 35;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 35;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[76]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[77]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 36;
        tmp_list_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_list_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST(tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 36;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_arg_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[76]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[77]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 37;
        tmp_list_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_list_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST(tmp_list_arg_3);
        Py_DECREF(tmp_list_arg_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 37;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_arg_4;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[76]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[77]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 38;
        tmp_list_arg_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_list_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = MAKE_LIST(tmp_list_arg_4);
        Py_DECREF(tmp_list_arg_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 38;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[76]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_10;
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_4;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[77]);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_4;
            }
            frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 39;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
            Py_DECREF(tmp_called_value_10);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_4;
            }
            tmp_assign_source_40 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_41;
        }
        if (isFrameUnusable(cache_frame_57cf602be32ad92d1d81963089affee6_2)) {
            Py_XDECREF(cache_frame_57cf602be32ad92d1d81963089affee6_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_57cf602be32ad92d1d81963089affee6_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_57cf602be32ad92d1d81963089affee6_2 = MAKE_FUNCTION_FRAME(codeobj_57cf602be32ad92d1d81963089affee6, module_uvicorn$main, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_57cf602be32ad92d1d81963089affee6_2->m_type_description == NULL);
        frame_57cf602be32ad92d1d81963089affee6_2 = cache_frame_57cf602be32ad92d1d81963089affee6_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStack(frame_57cf602be32ad92d1d81963089affee6_2);
        assert(Py_REFCNT(frame_57cf602be32ad92d1d81963089affee6_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_42 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_42 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 39;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_42;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_43;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_43 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_key;
                outline_0_var_key = tmp_assign_source_43;
                Py_INCREF(outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(outline_0_var_key);
            tmp_cmp_expr_left_1 = outline_0_var_key;
            tmp_cmp_expr_right_1 = mod_consts[82];
            tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_key);
            tmp_append_value_1 = outline_0_var_key;
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_57cf602be32ad92d1d81963089affee6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_57cf602be32ad92d1d81963089affee6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_57cf602be32ad92d1d81963089affee6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_57cf602be32ad92d1d81963089affee6_2,
            type_description_2,
            outline_0_var_key
        );


        // Release cached frame if used for exception.
        if (frame_57cf602be32ad92d1d81963089affee6_2 == cache_frame_57cf602be32ad92d1d81963089affee6_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_57cf602be32ad92d1d81963089affee6_2);
            cache_frame_57cf602be32ad92d1d81963089affee6_2 = NULL;
        }

        assertFrameObject(frame_57cf602be32ad92d1d81963089affee6_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 39;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 39;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[76]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 40;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 44;
        tmp_assign_source_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[29],
            PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_12;
        tmp_dict_key_1 = mod_consts[10];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[87]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[88];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[89]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[90];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[91];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_47 = MAKE_FUNCTION_uvicorn$main$$$function__1_print_version(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_args_kwsplit_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_36;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_42;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_48;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_kw_call_value_2_6;
        PyObject *tmp_kw_call_value_3_5;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_kw_call_value_3_6;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_57;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_68;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_74;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_value_80;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_value_82;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_84;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_86;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_value_88;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_90;
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_92;
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_kw_call_value_2_11;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_94;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_96;
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_value_98;
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_called_value_100;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_kw_call_value_2_12;
        PyObject *tmp_kw_call_value_3_11;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_called_value_102;
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_104;
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_kw_call_value_1_13;
        PyObject *tmp_kw_call_value_2_13;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_called_value_106;
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[93]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_call_args_kwsplit_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[94], "d");
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 62;
        tmp_called_value_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, &PyTuple_GET_ITEM(tmp_call_args_kwsplit_1, 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_call_args_kwsplit_1);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 63;
        tmp_called_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[96],
            PyTuple_GET_ITEM(mod_consts[97], 0)
        );

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[98]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 64;
        tmp_called_value_15 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[99], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[98]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 71;
        tmp_called_value_17 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[98]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 78;
        tmp_called_value_19 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[102], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[98]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 79;
        tmp_called_value_21 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[104], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[98]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 82;
        tmp_called_value_23 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[105], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[98]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = Py_True;
        tmp_kw_call_value_1_1 = mod_consts[107];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[108]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 89;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[109], 0), mod_consts[110]);
        Py_DECREF(tmp_called_value_27);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 83;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
            tmp_called_value_25 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tmp_called_value_26, mod_consts[111], kw_values, mod_consts[112]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[98]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 91;
        tmp_called_value_28 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[113], 0), mod_consts[114]);
        Py_DECREF(tmp_called_value_29);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[98]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 99;
        tmp_called_value_30 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[115], 0), mod_consts[114]);
        Py_DECREF(tmp_called_value_31);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[98]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 108;
        tmp_called_value_32 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[116], 0), mod_consts[117]);
        Py_DECREF(tmp_called_value_33);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[98]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 116;
        tmp_called_value_34 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[118], 0), mod_consts[119]);
        Py_DECREF(tmp_called_value_35);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[98]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = mod_consts[120];
        tmp_kw_call_value_2_2 = mod_consts[121];
        tmp_kw_call_value_3_1 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 123;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1};
            tmp_called_value_36 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_37, mod_consts[122], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_37);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[98]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = mod_consts[120];
        tmp_kw_call_value_2_3 = mod_consts[123];
        tmp_kw_call_value_3_2 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 130;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_2};
            tmp_called_value_38 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_39, mod_consts[124], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_39);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[98]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = mod_consts[120];
        tmp_kw_call_value_2_4 = mod_consts[125];
        tmp_kw_call_value_3_3 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 137;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_3};
            tmp_called_value_40 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_41, mod_consts[126], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_41);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[98]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 144;
        tmp_called_value_42 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[127], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_43);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[98]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 151;
        tmp_called_value_44 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[128], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_45);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[98]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 158;
        tmp_called_value_46 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_47, &PyTuple_GET_ITEM(mod_consts[129], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_47);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[98]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 165;
        tmp_called_value_48 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[130], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_49);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[98]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
            tmp_kw_call_value_0_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_5 = mod_consts[120];
        tmp_kw_call_value_2_5 = mod_consts[131];
        tmp_kw_call_value_3_4 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 172;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_4};
            tmp_called_value_50 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_51, mod_consts[132], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_51);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[98]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
            tmp_kw_call_value_0_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_6 = mod_consts[120];
        tmp_kw_call_value_2_6 = mod_consts[133];
        tmp_kw_call_value_3_5 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 179;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_5};
            tmp_called_value_52 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_53, mod_consts[134], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_53);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[98]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[108]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 188;
        tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_56, &PyTuple_GET_ITEM(mod_consts[109], 0), mod_consts[110]);
        Py_DECREF(tmp_called_value_56);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_7 = Py_None;
        tmp_kw_call_value_2_7 = mod_consts[135];
        tmp_kw_call_value_3_6 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 186;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_6};
            tmp_called_value_54 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_55, mod_consts[136], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[98]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[108]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 195;
        tmp_kw_call_value_0_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_59, &PyTuple_GET_ITEM(mod_consts[109], 0), mod_consts[110]);
        Py_DECREF(tmp_called_value_59);
        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_8 = Py_None;
        tmp_kw_call_value_2_8 = mod_consts[137];
        tmp_kw_call_value_3_7 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 193;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_7};
            tmp_called_value_57 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_58, mod_consts[138], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_kw_call_value_0_8);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[98]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_kw_call_value_0_9 == NULL)) {
            tmp_kw_call_value_0_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_9 = Py_None;
        tmp_kw_call_value_2_9 = mod_consts[139];
        tmp_kw_call_value_3_8 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 200;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_8};
            tmp_called_value_60 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_61, mod_consts[140], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_61);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[98]);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 207;
        tmp_called_value_62 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_63, &PyTuple_GET_ITEM(mod_consts[141], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_63);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[98]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 213;
        tmp_called_value_64 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_65, &PyTuple_GET_ITEM(mod_consts[142], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_65);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[98]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 219;
        tmp_called_value_66 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_67, &PyTuple_GET_ITEM(mod_consts[143], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_67);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[98]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 226;
        tmp_called_value_68 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_69, &PyTuple_GET_ITEM(mod_consts[144], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_69);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[98]);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 232;
        tmp_called_value_70 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_71, &PyTuple_GET_ITEM(mod_consts[145], 0), mod_consts[106]);
        Py_DECREF(tmp_called_value_71);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[98]);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 238;
        tmp_called_value_72 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_73, &PyTuple_GET_ITEM(mod_consts[146], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_73);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[98]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 245;
        tmp_called_value_74 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_75, &PyTuple_GET_ITEM(mod_consts[147], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_75);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[98]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 251;
        tmp_called_value_76 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_77, &PyTuple_GET_ITEM(mod_consts[148], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_77);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[98]);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 258;
        tmp_called_value_78 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_79, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_79);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[98]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 264;
        tmp_called_value_80 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_81, &PyTuple_GET_ITEM(mod_consts[150], 0), mod_consts[103]);
        Py_DECREF(tmp_called_value_81);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[98]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 270;
        tmp_called_value_82 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_83, &PyTuple_GET_ITEM(mod_consts[151], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_83);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[98]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 277;
        tmp_called_value_84 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_85, &PyTuple_GET_ITEM(mod_consts[152], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_85);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[98]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 280;
        tmp_called_value_86 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_87, &PyTuple_GET_ITEM(mod_consts[153], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_87);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[98]);
        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 287;
        tmp_called_value_88 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_89, &PyTuple_GET_ITEM(mod_consts[154], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_89);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[98]);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = (PyObject *)&PyLong_Type;
        tmp_int_arg_1 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_int_arg_1 == NULL)) {
            tmp_int_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_10 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_kw_call_value_1_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_10 = mod_consts[155];
        tmp_kw_call_value_3_9 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 294;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_9};
            tmp_called_value_90 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_91, mod_consts[156], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_91);
        Py_DECREF(tmp_kw_call_value_1_10);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[98]);
        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = (PyObject *)&PyLong_Type;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_int_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[157]);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_11 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_kw_call_value_1_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_93);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_11 = mod_consts[158];
        tmp_kw_call_value_3_10 = Py_True;
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 301;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_10};
            tmp_called_value_92 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_93, mod_consts[159], kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_called_value_93);
        Py_DECREF(tmp_kw_call_value_1_11);
        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[98]);
        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 308;
        tmp_called_value_94 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_95, &PyTuple_GET_ITEM(mod_consts[160], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_95);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[98]);
        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 315;
        tmp_called_value_96 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_97, &PyTuple_GET_ITEM(mod_consts[161], 0), mod_consts[100]);
        Py_DECREF(tmp_called_value_97);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[98]);
        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 322;
        tmp_called_value_98 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_99, &PyTuple_GET_ITEM(mod_consts[162], 0), mod_consts[114]);
        Py_DECREF(tmp_called_value_99);
        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[98]);
        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = Py_True;
        tmp_kw_call_value_1_12 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_kw_call_value_1_12 == NULL)) {
            tmp_kw_call_value_1_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_kw_call_value_1_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_101);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_12 = Py_False;
        tmp_kw_call_value_3_11 = Py_True;
        tmp_kw_call_value_4_1 = mod_consts[163];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 328;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_11, tmp_kw_call_value_4_1};
            tmp_called_value_100 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_101, mod_consts[164], kw_values, mod_consts[165]);
        }

        Py_DECREF(tmp_called_value_101);
        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[98]);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 336;
        tmp_called_value_102 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_103, &PyTuple_GET_ITEM(mod_consts[166], 0), mod_consts[167]);
        Py_DECREF(tmp_called_value_103);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[98]);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_13 = (PyObject *)&PyLong_Type;
        tmp_kw_call_value_1_13 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_kw_call_value_1_13 == NULL)) {
            tmp_kw_call_value_1_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_kw_call_value_1_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_105);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_13 = mod_consts[168];
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 343;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_13};
            tmp_called_value_104 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tmp_called_value_105, mod_consts[169], kw_values, mod_consts[103]);
        }

        Py_DECREF(tmp_called_value_105);
        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[98]);
        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 350;
        tmp_called_value_106 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_107, &PyTuple_GET_ITEM(mod_consts[170], 0), mod_consts[171]);
        Py_DECREF(tmp_called_value_107);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[172];
        tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_2 = _PyDict_NewPresized( 46 );
        {
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[173];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[174];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[39];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[175];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[176];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[177];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[178];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[179];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[180];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[181];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[182];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[183];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[184];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[25];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[185];
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_65 == NULL));
            tmp_expression_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[186]);
            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[187];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_67 == NULL));
            tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[186]);
            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[188];
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_69 == NULL));
            tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[186]);
            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_68);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[189];
            tmp_dict_value_2 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[26];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[190];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[191];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[192];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[193];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[194];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[195];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[196];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[197];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[198];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[199];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[200];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[201];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[202];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[203];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[204];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[205];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[206];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[207];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[208];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[209];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[210];
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_71 == NULL));
            tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[186]);
            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_70);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[211];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[212];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[213];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[214];
            tmp_dict_value_2 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[91];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_args_element_value_53 = MAKE_FUNCTION_uvicorn$main$$$function__2_main(tmp_annotations_2);

        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 350;
        tmp_args_element_value_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 343;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 336;
        tmp_args_element_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 328;
        tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 322;
        tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 315;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 308;
        tmp_args_element_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 301;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 294;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 287;
        tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 280;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 277;
        tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 270;
        tmp_args_element_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 264;
        tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 258;
        tmp_args_element_value_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 251;
        tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 245;
        tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 238;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 232;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 226;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 219;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 213;
        tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 207;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 200;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 193;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 186;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 179;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 172;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 165;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 158;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 151;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 144;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 137;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 130;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 123;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 116;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 108;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 99;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 91;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 83;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 82;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 79;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 78;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 71;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 64;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 63;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame.f_lineno = 62;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_1;
        tmp_dict_key_3 = mod_consts[173];
        tmp_dict_value_3 = mod_consts[216];
        tmp_kw_defaults_1 = _PyDict_NewPresized( 44 );
        {
            PyObject *tmp_expression_value_72;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[174];
            tmp_dict_value_3 = mod_consts[217];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[39];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[175];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[176];
            tmp_dict_value_3 = mod_consts[120];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[177];
            tmp_dict_value_3 = mod_consts[120];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[178];
            tmp_dict_value_3 = mod_consts[120];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[179];
            tmp_dict_value_3 = mod_consts[218];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[180];
            tmp_dict_value_3 = mod_consts[219];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[181];
            tmp_dict_value_3 = mod_consts[219];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[182];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[183];
            tmp_dict_value_3 = mod_consts[120];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[184];
            tmp_dict_value_3 = mod_consts[120];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[25];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[185];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[187];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[188];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[189];
            tmp_dict_value_3 = mod_consts[220];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[26];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[190];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[191];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 478;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[192];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[193];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[194];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[195];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[196];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[197];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[198];
            tmp_dict_value_3 = mod_consts[221];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[199];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[200];
            tmp_dict_value_3 = mod_consts[222];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[201];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[202];
            tmp_dict_value_3 = mod_consts[223];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[203];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[204];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[205];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[206];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[207];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[157]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[208];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[209];
            tmp_dict_value_3 = mod_consts[224];
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[210];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[211];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[212];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[214];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[213];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_kw_defaults_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        tmp_dict_key_4 = mod_consts[172];
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_expression_value_74 == NULL));
        tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[225]);
        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[226];
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_75;
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_1);
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_75 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[227]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_expression_value_73);
        Py_DECREF(tmp_subscript_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_73);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 46 );
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_123;
            PyObject *tmp_expression_value_124;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_expression_value_136;
            PyObject *tmp_expression_value_137;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_expression_value_138;
            PyObject *tmp_expression_value_139;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_expression_value_140;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_expression_value_143;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_expression_value_144;
            PyObject *tmp_expression_value_145;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_147;
            PyObject *tmp_expression_value_148;
            PyObject *tmp_subscript_value_39;
            PyObject *tmp_expression_value_149;
            PyObject *tmp_expression_value_150;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_expression_value_151;
            PyObject *tmp_expression_value_152;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_expression_value_153;
            PyObject *tmp_expression_value_154;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_expression_value_155;
            PyObject *tmp_expression_value_156;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_expression_value_157;
            PyObject *tmp_expression_value_158;
            PyObject *tmp_subscript_value_44;
            PyObject *tmp_expression_value_159;
            PyObject *tmp_expression_value_160;
            PyObject *tmp_subscript_value_45;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[173];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[174];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[39];
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_77 == NULL));
            tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[228]);
            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_76);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[175];
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_79 == NULL));
            tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[228]);
            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_7 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[176];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[177];
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_81 == NULL));
            tmp_expression_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[225]);
            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_83 == NULL));
            tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[229]);
            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_80);

                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_80);
                Py_DECREF(tmp_expression_value_82);

                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[230]);
            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_80);
                Py_DECREF(tmp_expression_value_82);

                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_80);

                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_2);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_expression_value_80);
            Py_DECREF(tmp_subscript_value_8);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_80);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[178];
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_86 == NULL));
            tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[225]);
            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;

                goto dict_build_exception_4;
            }
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_88 == NULL));
            tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[229]);
            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_85);

                exception_lineno = 462;

                goto dict_build_exception_4;
            }
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_85);
                Py_DECREF(tmp_expression_value_87);

                exception_lineno = 462;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[230]);
            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_85);
                Py_DECREF(tmp_expression_value_87);

                exception_lineno = 462;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_87, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_87);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_85);

                exception_lineno = 462;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_3);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_expression_value_85);
            Py_DECREF(tmp_subscript_value_10);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_85);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 462;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[179];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[180];
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_91 == NULL));
            tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[228]);
            if (tmp_expression_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_12 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[181];
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_93 == NULL));
            tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[228]);
            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_13 = (PyObject *)&PyFloat_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_92, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[182];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[183];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[184];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[25];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[185];
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_95 == NULL));
            tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[228]);
            if (tmp_expression_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_97 == NULL));
            tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[225]);
            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_94);

                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_99 == NULL));
            tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[186]);
            if (tmp_expression_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_94);
                Py_DECREF(tmp_expression_value_96);

                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_16 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_98);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_94);
                Py_DECREF(tmp_expression_value_96);

                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_15, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_4);
            tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_96);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_subscript_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_94);

                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_94);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[187];
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_101 == NULL));
            tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[228]);
            if (tmp_expression_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_103 == NULL));
            tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[225]);
            if (tmp_expression_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_100);

                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_105 == NULL));
            tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[186]);
            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_100);
                Py_DECREF(tmp_expression_value_102);

                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_104, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_100);
                Py_DECREF(tmp_expression_value_102);

                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_5);
            tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_102);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_subscript_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_100);

                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_100);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[188];
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_107 == NULL));
            tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[228]);
            if (tmp_expression_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_4;
            }
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_109 == NULL));
            tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[225]);
            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_106);

                exception_lineno = 472;

                goto dict_build_exception_4;
            }
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_111 == NULL));
            tmp_expression_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[186]);
            if (tmp_expression_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_106);
                Py_DECREF(tmp_expression_value_108);

                exception_lineno = 472;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_110, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_110);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_106);
                Py_DECREF(tmp_expression_value_108);

                exception_lineno = 472;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_21, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_21, 1, tmp_tuple_element_6);
            tmp_subscript_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_108, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_108);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_subscript_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_106);

                exception_lineno = 472;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_106, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_106);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[189];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[26];
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_113 == NULL));
            tmp_expression_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[228]);
            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_23 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_112, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_112);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[190];
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_115 == NULL));
            tmp_expression_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[228]);
            if (tmp_expression_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;

                goto dict_build_exception_4;
            }
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_117 == NULL));
            tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[225]);
            if (tmp_expression_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_114);

                exception_lineno = 475;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_118;
                PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_7);
                tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[40]);

                if (unlikely(tmp_expression_value_118 == NULL)) {
                    tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                }

                assert(!(tmp_expression_value_118 == NULL));
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[231]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 475;

                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_25, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_expression_value_114);
            Py_DECREF(tmp_expression_value_116);
            Py_DECREF(tmp_subscript_value_25);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_subscript_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_116, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_116);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_subscript_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_114);

                exception_lineno = 475;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_114, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_114);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[191];
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_120 == NULL));
            tmp_expression_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[228]);
            if (tmp_expression_value_119 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto dict_build_exception_4;
            }
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_122 == NULL));
            tmp_expression_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[225]);
            if (tmp_expression_value_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_119);

                exception_lineno = 477;

                goto dict_build_exception_4;
            }
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_124 == NULL));
            tmp_expression_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[232]);
            if (tmp_expression_value_123 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_119);
                Py_DECREF(tmp_expression_value_121);

                exception_lineno = 477;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_125;
                PyTuple_SET_ITEM0(tmp_subscript_value_28, 0, tmp_tuple_element_9);
                tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

                if (unlikely(tmp_expression_value_125 == NULL)) {
                    tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
                }

                assert(!(tmp_expression_value_125 == NULL));
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[233]);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 477;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_expression_value_119);
            Py_DECREF(tmp_expression_value_121);
            Py_DECREF(tmp_expression_value_123);
            Py_DECREF(tmp_subscript_value_28);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_123, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_123);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_119);
                Py_DECREF(tmp_expression_value_121);

                exception_lineno = 477;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_27, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_27, 1, tmp_tuple_element_8);
            tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_121, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_121);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_subscript_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_119);

                exception_lineno = 477;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_119, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_119);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 477;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[192];
            tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_127 == NULL)) {
                tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_127 == NULL));
            tmp_expression_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[228]);
            if (tmp_expression_value_126 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto dict_build_exception_4;
            }
            tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_129 == NULL)) {
                tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_129 == NULL));
            tmp_expression_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[225]);
            if (tmp_expression_value_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_126);

                exception_lineno = 479;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_30 = mod_consts[234];
            tmp_subscript_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_128, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_128);
            if (tmp_subscript_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_126);

                exception_lineno = 479;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_126, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_126);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[193];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[194];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[195];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[196];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[197];
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_131 == NULL));
            tmp_expression_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[228]);
            if (tmp_expression_value_130 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto dict_build_exception_4;
            }
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_133 == NULL));
            tmp_expression_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[225]);
            if (tmp_expression_value_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_130);

                exception_lineno = 484;

                goto dict_build_exception_4;
            }
            tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_135 == NULL)) {
                tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_135 == NULL));
            tmp_expression_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[186]);
            if (tmp_expression_value_134 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_130);
                Py_DECREF(tmp_expression_value_132);

                exception_lineno = 484;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_33 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_134, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_134);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_130);
                Py_DECREF(tmp_expression_value_132);

                exception_lineno = 484;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_32, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_32, 1, tmp_tuple_element_10);
            tmp_subscript_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_132, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_132);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_subscript_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_130);

                exception_lineno = 484;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_130, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_130);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[198];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[199];
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_137 == NULL));
            tmp_expression_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[228]);
            if (tmp_expression_value_136 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_34 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_136, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_136);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[200];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[201];
            tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_139 == NULL)) {
                tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_139 == NULL));
            tmp_expression_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[228]);
            if (tmp_expression_value_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_35 = (PyObject *)&PyLong_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_138, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_138);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[202];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[203];
            tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_141 == NULL)) {
                tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_141 == NULL));
            tmp_expression_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[228]);
            if (tmp_expression_value_140 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_36 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_140, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_140);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[204];
            tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_143 == NULL)) {
                tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_143 == NULL));
            tmp_expression_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[228]);
            if (tmp_expression_value_142 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto dict_build_exception_4;
            }
            tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_145 == NULL)) {
                tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_145 == NULL));
            tmp_expression_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[225]);
            if (tmp_expression_value_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_142);

                exception_lineno = 491;

                goto dict_build_exception_4;
            }
            tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_146;
                PyTuple_SET_ITEM0(tmp_subscript_value_38, 0, tmp_tuple_element_11);
                tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[40]);

                if (unlikely(tmp_expression_value_146 == NULL)) {
                    tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
                }

                assert(!(tmp_expression_value_146 == NULL));
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[231]);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 491;

                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_expression_value_142);
            Py_DECREF(tmp_expression_value_144);
            Py_DECREF(tmp_subscript_value_38);
            goto dict_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_144, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_144);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_subscript_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_142);

                exception_lineno = 491;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_142, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_142);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[205];
            tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_148 == NULL)) {
                tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_148 == NULL));
            tmp_expression_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[228]);
            if (tmp_expression_value_147 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 492;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_39 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_147, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_147);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 492;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[206];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[207];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[208];
            tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_150 == NULL)) {
                tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_150 == NULL));
            tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[228]);
            if (tmp_expression_value_149 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_40 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_149, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_149);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[209];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[210];
            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_152 == NULL)) {
                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_152 == NULL));
            tmp_expression_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[228]);
            if (tmp_expression_value_151 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto dict_build_exception_4;
            }
            tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_154 == NULL)) {
                tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_154 == NULL));
            tmp_expression_value_153 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[186]);
            if (tmp_expression_value_153 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_151);

                exception_lineno = 497;

                goto dict_build_exception_4;
            }
            tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_156 == NULL)) {
                tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_156 == NULL));
            tmp_expression_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[235]);
            if (tmp_expression_value_155 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_151);
                Py_DECREF(tmp_expression_value_153);

                exception_lineno = 497;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_43 = mod_consts[236];
            tmp_subscript_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_155, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_155);
            if (tmp_subscript_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_151);
                Py_DECREF(tmp_expression_value_153);

                exception_lineno = 497;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_153, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_153);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_subscript_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_151);

                exception_lineno = 497;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_151, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_151);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[211];
            tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_158 == NULL)) {
                tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_158 == NULL));
            tmp_expression_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[228]);
            if (tmp_expression_value_157 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_44 = (PyObject *)&PyBool_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_157, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_157);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[212];
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            assert(!(tmp_expression_value_160 == NULL));
            tmp_expression_value_159 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[228]);
            if (tmp_expression_value_159 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_45 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_159, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_159);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 499;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[214];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[213];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[91];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_49 = MAKE_FUNCTION_uvicorn$main$$$function__3_run(tmp_kw_defaults_1, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_uvicorn$main, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_49);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5b72ebb35a2087d5a3f7752f30acc31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5b72ebb35a2087d5a3f7752f30acc31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5b72ebb35a2087d5a3f7752f30acc31, exception_lineno);
    }



    assertFrameObject(frame_c5b72ebb35a2087d5a3f7752f30acc31);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("uvicorn.main", false);

    Py_INCREF(module_uvicorn$main);
    return module_uvicorn$main;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_uvicorn$main, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("uvicorn$main", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
