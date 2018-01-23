/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:25:08 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 14:51:23 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>

int		gl_var = 1; // global variable
int		f(void) { return (1); }

namespace	Foo
{
	// new bag, new semantic relation
	// whole new scope, with same variable as in global scope
	int		gl_var = 2;
	// as far as we have gl_var in Foo scope the returning value from 'f' function will be this local one
	// defined above, currently its 2(two)
	int		f(void) { return (gl_var); }
}

namespace	VeryLongNamespaceName
{
	int		gl_var = 3;
	int		f(void) { return (3); }
}

namespace	Man = VeryLongNamespaceName; // namespace aliasing, if namespace's name is very long
										// we can assign its name to a variable
										// with shorter name and with namespace type

namespace	NestedNamespaceExample
{
	int		gl_var = 4;
	int		f(void) { return (4); }
	namespace	NamespaceInsideAnother
	{
		int		gl_var = 5;
		int		f(void) { return (gl_var); }
	}
}

namespace	nested = NestedNamespaceExample::NamespaceInsideAnother;

int		main(void)
{
	printf("Global namespace([gl_var, f()]): [%d:%d]\n\n", gl_var, f()); // global namespace, default
	printf("Foo namespace: [%d:%d]\n\n", Foo::gl_var, Foo::f()); 
	printf("VeryLongNamespaceName namespace: [%d:%d]\n\n", VeryLongNamespaceName::gl_var, VeryLongNamespaceName::f());
	printf("Man namespace: [%d:%d]\n\n", Man::gl_var, Man::f());
	// Empty namespace, so its become default(Global scope)
	printf("Global namespace([::gl_var, ::f()]): [%d:%d]\n\n", ::gl_var, ::f());
	printf("Nested namespace: [%d:%d]\n\n", nested::gl_var, nested::f());
	printf("NestedNamespaceExample namespace: [%d:%d]\n\n", NestedNamespaceExample::gl_var, NestedNamespaceExample::f());
	printf("NestedNamespaceExample::NamespaceInsideAnother namespace: [%d:%d]\n\n", NestedNamespaceExample::NamespaceInsideAnother::gl_var, NestedNamespaceExample::NamespaceInsideAnother::f());
	return (0);
}
