
#include "gui_main.h"
#include <glib.h>
#include <gtk/gtk.h>


// TODO:
static void callback_configure_displays(GtkWidget *widget, gpointer data) {

    // create/open the "configure display" window
    g_print("Opening display configuration\n");

}

// TODO:
static void callback_configure_upstream(GtkWidget *widget, gpointer data) {

    // create/open the "configure upstream ports" window
    g_print("Opening upstream port configuration\n");

}

void activate(GtkApplication *app, gpointer data) {

    GtkWidget *main_window;
    GtkWidget *main_grid;
    GtkWidget *button_config_box;
    GtkWidget *button_displays;
    GtkWidget *button_upstream;

    main_window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(main_window), "MIDiWay");
    gtk_window_set_default_size(GTK_WINDOW(main_window), 200, 200);

    main_grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(main_window), main_grid);

    button_config_box = gtk_button_box_new(GTK_ORIENTATION_VERTICAL);
    gtk_widget_set_halign(button_config_box, GTK_ALIGN_START);
    gtk_grid_attach(GTK_GRID(main_grid), button_config_box, 0, 0, 1, 1);

    button_displays = gtk_button_new_with_label("Configure displays");
    gtk_widget_set_valign(button_displays, GTK_ALIGN_START);
    g_signal_connect(button_displays, "clicked", G_CALLBACK(callback_configure_displays), NULL);
    gtk_container_add(GTK_CONTAINER(button_config_box), button_displays);

    button_upstream = gtk_button_new_with_label("Configure upstream ports");
    gtk_widget_set_valign(button_upstream, GTK_ALIGN_START);
    g_signal_connect(button_upstream, "clicked", G_CALLBACK(callback_configure_upstream), NULL);
    gtk_container_add(GTK_CONTAINER(button_config_box), button_upstream);

    gtk_widget_show_all(main_window);
    gtk_window_present(GTK_WINDOW(main_window));

}
