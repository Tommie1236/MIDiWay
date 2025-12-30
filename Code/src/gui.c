
#include "gui.h"

static void callback_hello(GtkWidget *widget, gpointer data) {

    g_print("Hello World\n");

}

void activate(GtkApplication *app,
                     gpointer       user_data) {

    GtkWidget *window;
    GtkWidget *button;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "MIDiWay");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);

    button = gtk_button_new_with_label("Hello");
    gtk_widget_set_halign(button, GTK_ALIGN_CENTER);
    gtk_widget_set_valign(button, GTK_ALIGN_CENTER);
    g_signal_connect(button, "clicked", G_CALLBACK(callback_hello), NULL);
    gtk_container_add(GTK_CONTAINER (window), button);


    gtk_widget_show_all(window);
    gtk_window_present(GTK_WINDOW(window));

}
