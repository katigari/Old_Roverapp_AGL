/* Copyright 2018 Pedro Cuadra - pjcuadra@gmail.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* WARNING: This file is automatically generated by raml2agl */
extern "C"
{
   #define AFB_BINDING_VERSION 2
   #include <afb/afb-binding.h>
};


#include <cstddef>
#include <cstdio>
#include <cstring>

#include <json-c/json.h>

#include <service/ServiceRoverUtils.h>
// #include <all_types.h>

static ServiceRoverUtils obj;

static int init()
{
  int rc = 0;
	AFB_NOTICE("Initializing... ");
  rc = obj.init();
	AFB_NOTICE("Initialization done!");
	return rc;
}

static void get_honocloud_status(struct afb_req request) {
  json_object *args = afb_req_json(request);
  bool _var_is_on = static_cast<bool>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  json_object *val[6];
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_honocloud_status");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "host_name", &val[0])) {
      AFB_ERROR("[roverutils] No 'host_name' param provided");
      afb_req_fail(request, "bad-request", "No 'host_name' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "port", &val[1])) {
      AFB_ERROR("[roverutils] No 'port' param provided");
      afb_req_fail(request, "bad-request", "No 'port' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "tenant_name", &val[2])) {
      AFB_ERROR("[roverutils] No 'tenant_name' param provided");
      afb_req_fail(request, "bad-request", "No 'tenant_name' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "device_id", &val[3])) {
      AFB_ERROR("[roverutils] No 'device_id' param provided");
      afb_req_fail(request, "bad-request", "No 'device_id' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "user", &val[4])) {
      AFB_ERROR("[roverutils] No 'user' param provided");
      afb_req_fail(request, "bad-request", "No 'user' param provided");
      return;
    }
    if (!json_object_object_get_ex(args, "password", &val[5])) {
      AFB_ERROR("[roverutils] No 'password' param provided");
      afb_req_fail(request, "bad-request", "No 'password' param provided");
      return;
    }


  }


  ret = obj.get_honocloud_status(static_cast<std::string>(json_object_get_string(val[0])),
      static_cast<int>(json_object_get_int(val[1])),
      static_cast<std::string>(json_object_get_string(val[2])),
      static_cast<std::string>(json_object_get_string(val[3])),
      static_cast<std::string>(json_object_get_string(val[4])),
      static_cast<std::string>(json_object_get_string(val[5])),
      _var_is_on);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_honocloud_status' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_honocloud_status' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_boolean(_var_is_on);
  json_object_object_add(new_json, "is_on", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_number_of_network_interfaces(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int _var_num_interface = static_cast<int>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_number_of_network_interfaces");


  if (args) {
    // Parse args if possible


  }


  ret = obj.get_number_of_network_interfaces(_var_num_interface);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_number_of_network_interfaces' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_number_of_network_interfaces' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_int(_var_num_interface);
  json_object_object_add(new_json, "num_interface", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_bluetooth_status(struct afb_req request) {
  json_object *args = afb_req_json(request);
  bool _var_is_on = static_cast<bool>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_bluetooth_status");


  if (args) {
    // Parse args if possible


  }


  ret = obj.get_bluetooth_status(_var_is_on);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_bluetooth_status' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_bluetooth_status' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_boolean(_var_is_on);
  json_object_object_add(new_json, "is_on", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_internet_status(struct afb_req request) {
  json_object *args = afb_req_json(request);
  bool _var_is_on = static_cast<bool>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_internet_status");


  if (args) {
    // Parse args if possible


  }


  ret = obj.get_internet_status(_var_is_on);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_internet_status' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_internet_status' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_boolean(_var_is_on);
  json_object_object_add(new_json, "is_on", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_wlan_status(struct afb_req request) {
  json_object *args = afb_req_json(request);
  bool _var_is_on = static_cast<bool>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_wlan_status");


  if (args) {
    // Parse args if possible


  }


  ret = obj.get_wlan_status(_var_is_on);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_wlan_status' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_wlan_status' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_boolean(_var_is_on);
  json_object_object_add(new_json, "is_on", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_interface_info(struct afb_req request) {
  json_object *args = afb_req_json(request);
  std::string _var_interface_name;
  std::string _var_ip_addr;
  std::string _var_hw_addr;
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  json_object *val[1];
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_interface_info");


  if (args) {
    // Parse args if possible
    if (!json_object_object_get_ex(args, "interface_idx", &val[0])) {
      AFB_ERROR("[roverutils] No 'interface_idx' param provided");
      afb_req_fail(request, "bad-request", "No 'interface_idx' param provided");
      return;
    }


  }


  ret = obj.get_interface_info(static_cast<int>(json_object_get_int(val[0])),
      _var_interface_name,
      _var_ip_addr,
      _var_hw_addr);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_interface_info' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_interface_info' returning error %d", ret);
    return;
  }

  //
  new_sub_json = json_object_new_string(_var_interface_name.c_str());
  json_object_object_add(new_json, "interface_name", new_sub_json);
  new_sub_json = json_object_new_string(_var_ip_addr.c_str());
  json_object_object_add(new_json, "ip_addr", new_sub_json);
  new_sub_json = json_object_new_string(_var_hw_addr.c_str());
  json_object_object_add(new_json, "hw_addr", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_core_utilization(struct afb_req request) {
  json_object *args = afb_req_json(request);
  double _var_core_utilization = static_cast<double>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  double * _var_out_core_utilization = nullptr;
  json_object *val_core_utilization_size_obj = NULL;
  int _var_in_core_utilization_size = 0;
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_core_utilization");


  if (args) {
    // Parse args if possible

    if (!json_object_object_get_ex(args, "core_utilization_size", &val_core_utilization_size_obj)) {
      AFB_ERROR("[roverutils] No 'core_utilization_size' param provided");
      afb_req_fail(request, "bad-request", "No 'core_utilization_size' param provided");
      return;
    }

    _var_in_core_utilization_size = json_object_get_int(val_core_utilization_size_obj);

    _var_out_core_utilization = new double[_var_in_core_utilization_size];

  }


  ret = obj.get_core_utilization(_var_out_core_utilization, _var_in_core_utilization_size);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_core_utilization' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_core_utilization' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_array();
  for (int i = 0; i < _var_in_core_utilization_size; i++) {
    json_object_array_put_idx(new_sub_json, i, json_object_new_double(_var_out_core_utilization[i]));
  }
  json_object_object_add(new_json, "core_utilization", new_sub_json);

  delete [] _var_out_core_utilization;


  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_ethernet_status(struct afb_req request) {
  json_object *args = afb_req_json(request);
  bool _var_is_on = static_cast<bool>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_ethernet_status");


  if (args) {
    // Parse args if possible


  }


  ret = obj.get_ethernet_status(_var_is_on);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_ethernet_status' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_ethernet_status' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_boolean(_var_is_on);
  json_object_object_add(new_json, "is_on", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}

static void get_number_cores(struct afb_req request) {
  json_object *args = afb_req_json(request);
  int _var_num_cores = static_cast<int>(0);
  json_object * new_json = json_object_new_object();
  json_object * new_sub_json = NULL;
  int ret = 0;

  AFB_NOTICE("[roverutils] Calling get_number_cores");


  if (args) {
    // Parse args if possible


  }


  ret = obj.get_number_cores(_var_num_cores);
  if (ret) {
    AFB_ERROR("[roverutils] Verb 'get_number_cores' returning error");
    afb_req_fail_f(request, "bad-request", "Verb 'get_number_cores' returning error %d", ret);
    return;
  }


  new_sub_json = json_object_new_int(_var_num_cores);
  json_object_object_add(new_json, "num_cores", new_sub_json);

  afb_req_success(request, new_json, NULL);
  // Release the request json object
  json_object_put(new_json);

}


// static const struct afb_auth _afb_auths_v2_monitor[] = {
// 	{type : afb_auth_Permission, text : "urn:AGL:permission:monitor:public:set"},
// 	{type : afb_auth_Permission, text : "urn:AGL:permission:monitor:public:get"},
// 	{type : afb_auth_Or, first : &_afb_auths_v2_monitor[1], next : &_afb_auths_v2_monitor[0]}
// };

static const struct afb_verb_v2 verbs[] = {
  /*Without security*/
  {.verb = "get_honocloud_status", .callback = get_honocloud_status, .auth = NULL, .info = "Get the status of the Hono Cloud", .session = 0},
  {.verb = "get_number_of_network_interfaces", .callback = get_number_of_network_interfaces, .auth = NULL, .info = "Get the amount of network interfaces", .session = 0},
  {.verb = "get_bluetooth_status", .callback = get_bluetooth_status, .auth = NULL, .info = "Get the status of the Bluetooth", .session = 0},
  {.verb = "get_internet_status", .callback = get_internet_status, .auth = NULL, .info = "Get the status of the internet Connection", .session = 0},
  {.verb = "get_wlan_status", .callback = get_wlan_status, .auth = NULL, .info = "Get the status of the WLAN", .session = 0},
  {.verb = "get_interface_info", .callback = get_interface_info, .auth = NULL, .info = "Get the information of the network by a given idx", .session = 0},
  {.verb = "get_core_utilization", .callback = get_core_utilization, .auth = NULL, .info = "Get Core utilization", .session = 0},
  {.verb = "get_ethernet_status", .callback = get_ethernet_status, .auth = NULL, .info = "Get the status of the Ethernet Connection", .session = 0},
  {.verb = "get_number_cores", .callback = get_number_cores, .auth = NULL, .info = "Get number of cores", .session = 0},
  {.verb= NULL, .callback=NULL, .auth = NULL, .info = NULL, .session = 0 }
};

const struct afb_binding_v2 afbBindingV2 = {
  .api = "roverutils",
  .specification = "",
  .info = "Auto generated - Rover Utils",
  .verbs = verbs,
  .preinit = NULL,
  .init = init,
  .onevent = NULL,
  .noconcurrency = 1
};