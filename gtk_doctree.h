#ifndef __gtk_doctree_h__
#define __gtk_doctree_h__  1

#include <gtk/gtk.h>

#include "gtk_appdata.h"

enum { COLNAME = 0, COLINST, NUMCOL };

typedef struct {
    GtkSourceBuffer *buf;               /* textview buffer instance */
    gchar *filename;                    /* filename associated with buffer */
    gint line, col;                     /* line, col when switching */
    // gboolean readonly;                  /* readonly flag */
} kinst_t;

GtkTreeModel *create_and_fill_model (mainwin_t *app);
GtkWidget *create_view_and_model (mainwin_t *app, gchar **argv);

/** doctree callbacks */
void doctree_activate (GtkWidget *widget, gpointer data);

#endif

