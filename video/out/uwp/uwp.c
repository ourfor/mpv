#include "video/out/w32_common.h"
#include "common/common.h"
#include "osdep/terminal.h"
#include "misc/language.h"

void vo_w32_uninit(struct vo *vo) { }
HWND vo_w32_hwnd(struct vo *vo) { return NULL; }
void vo_w32_run_on_thread(struct vo *vo, void (*cb)(void *ctx), void *ctx) { }
void vo_w32_set_transparency(struct vo *vo, bool enable) { }
int vo_w32_control(struct vo *vo, int *events, int request, void *arg) { return 1; }
void vo_w32_config(struct vo *vo) { }
bool vo_w32_init(struct vo *vo) { return 1; }


bool mp_check_console(void *handle) { return false; };
char **mp_get_user_langs(void) { return NULL; }