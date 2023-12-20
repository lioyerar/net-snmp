/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.check_values_local.conf,v 5.1 2003/05/30 23:53:15 hardaker Exp $
 */

/*
 * standard headers 
 */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include "netSnmpHostsTable_checkfns.h"
#include "netSnmpHostsTable_enums.h"
#include "netSnmpHostsTable_checkfns_local.h"

/** Decides if an incoming value for the netSnmpHostAddressType mib node is legal, from a local implementation specific viewpoint.
 *  @param type    The incoming data type.
 *  @param val     The value to be checked.
 *  @param val_len The length of data stored in val (in bytes).
 *  @param old_val
 *  @param old_val_len
 *  @return 0 if the incoming value is legal, an SNMP error code otherwise.
 */
int
check_netSnmpHostAddressType_local(int type, long *val, size_t val_len,
                                   long *old_val, size_t old_val_len)
{

    /** XXX: you may want to check aspects of the new value that
       were not covered by the automatic checks by the parent function. */

    /** XXX: you make want to check that the requested change from
        the old value to the new value is legal (ie, the transition
        from one value to another is legal */

    if (*val != NETSNMPHOSTADDRESSTYPE_IPV4)
        return SNMP_ERR_WRONGVALUE;

    /** if everything looks ok, return SNMP_ERR_NOERROR */
    return SNMP_ERR_NOERROR;
}

/** Decides if an incoming value for the netSnmpHostAddress mib node is legal, from a local implementation specific viewpoint.
 *  @param type    The incoming data type.
 *  @param val     The value to be checked.
 *  @param val_len The length of data stored in val (in bytes).
 *  @param old_val
 *  @param old_val_len
 *  @return 0 if the incoming value is legal, an SNMP error code otherwise.
 */
int
check_netSnmpHostAddress_local(int type, char *val, size_t val_len,
                               char *old_val, size_t old_val_len)
{

    /** XXX: you may want to check aspects of the new value that
       were not covered by the automatic checks by the parent function. */

    /** XXX: you make want to check that the requested change from
        the old value to the new value is legal (ie, the transition
        from one value to another is legal */

    if (val_len != 4)
        return SNMP_ERR_WRONGVALUE;

    /** if everything looks ok, return SNMP_ERR_NOERROR */
    return SNMP_ERR_NOERROR;
}

/** Decides if an incoming value for the netSnmpHostStorage mib node is legal, from a local implementation specific viewpoint.
 *  @param type    The incoming data type.
 *  @param val     The value to be checked.
 *  @param val_len The length of data stored in val (in bytes).
 *  @param old_val
 *  @param old_val_len
 *  @return 0 if the incoming value is legal, an SNMP error code otherwise.
 */
int
check_netSnmpHostStorage_local(int type, long *val, size_t val_len,
                               long *old_val, size_t old_val_len)
{

    /** XXX: you may want to check aspects of the new value that
       were not covered by the automatic checks by the parent function. */

    /** XXX: you make want to check that the requested change from
        the old value to the new value is legal (ie, the transition
        from one value to another is legal */

    if (*val != ST_NONVOLATILE)
        return SNMP_ERR_WRONGVALUE;

    /** if everything looks ok, return SNMP_ERR_NOERROR */
    return SNMP_ERR_NOERROR;
}

/** Decides if an incoming value for the netSnmpHostRowStatus mib node is legal, from a local implementation specific viewpoint.
 *  @param type    The incoming data type.
 *  @param val     The value to be checked.
 *  @param val_len The length of data stored in val (in bytes).
 *  @param old_val
 *  @param old_val_len
 *  @return 0 if the incoming value is legal, an SNMP error code otherwise.
 */
int
check_netSnmpHostRowStatus_local(int type, long *val, size_t val_len,
                                 long *old_val, size_t old_val_len)
{

    /** XXX: you may want to check aspects of the new value that
       were not covered by the automatic checks by the parent function. */

    /** XXX: you make want to check that the requested change from
        the old value to the new value is legal (ie, the transition
        from one value to another is legal */

    /** if everything looks ok, return SNMP_ERR_NOERROR */
    return SNMP_ERR_NOERROR;
}
