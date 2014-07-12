mod_case_filter.la: mod_case_filter.slo
	$(SH_LINK) -rpath $(libexecdir) -module -avoid-version  mod_case_filter.lo $(MOD_CASE_FILTER_LDADD)
mod_case_filter_in.la: mod_case_filter_in.slo
	$(SH_LINK) -rpath $(libexecdir) -module -avoid-version  mod_case_filter_in.lo $(MOD_CASE_FILTER_IN_LDADD)
DISTCLEAN_TARGETS = modules.mk
static = 
shared =  mod_case_filter.la mod_case_filter_in.la
